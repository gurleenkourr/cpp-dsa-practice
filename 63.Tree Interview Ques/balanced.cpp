class Solution {
    /*
    private:
    int height(Node* root) {
       //base case
       if(root==NULL){
           return -1;
       }
       int left=height(root->left);
       int right=height(root->right);

       int ans=max(left,right)+1;
       return ans;
    }
    */
  public:
  //****************APPROACH 2 Time complexity O(n)**********************//
  
  pair<bool,int>isBalancedFast(Node*root){
      //Base case
      if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
      }
      pair<int,int>left=isBalancedFast(root->left);
      pair<int,int>right=isBalancedFast(root->right);
      
      bool leftAns=left.first;
      bool rightAns=right.first;
      
      bool diff=abs(left.second-right.second)<=1;
      
      pair<bool,int>ans;
      ans.second=max(left.second,right.second)+1;
      
      if(leftAns && rightAns && diff){
        ans.first=true;
      }
      else{
        ans.second=false;
      }
      return ans;
    }
 
  bool isBalanced(Node* root) {
        return isBalancedFast(root).first;
    /*
    //APPROACH 1 Time complexity O(n2)
        //Base case
        if(root==NULL){
            return true;
        }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool diff=abs(height(root->left)-height(root->right))<=1;
        
        if(left && right && diff){
            return 1;
        }
        else{
            return false;
        }
    */
  }
};

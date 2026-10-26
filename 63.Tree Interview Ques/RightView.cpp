
class Solution {
  public:
  void solve(Node *root, vector<int>&ans,int level){
    //Base case
    if(root==NULL){
        return;
    }

    //We have entered to a new level
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    solve(root->right,ans,level+1);
    solve(root->left,ans,level+1);
    
    }
    vector<int> rightView(Node *root) {
       vector<int>ans;
       solve(root,ans,0);
       return ans;
    }
};

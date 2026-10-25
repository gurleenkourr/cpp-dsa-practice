
class Solution {
  public:
  pair<bool,int>isSumTreeFast(Node* node){
      //base case
      if(node==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
      }
      if(node->left==NULL & node->right==NULL){
        pair<bool,int>p=make_pair(true,node->data);
        return p;
      }
      pair<bool,int>leftAns=isSumTreeFast(node->left);
      pair<bool,int>rightAns=isSumTreeFast(node->right);
      
      bool isLeftSumTree=leftAns.first;
      bool isRightSumTree=rightAns.first;
      
      int leftSum=leftAns.second;
      int rightSum=rightAns.second;
      
      bool cond=node->data==leftSum+rightSum;
      pair<bool,int>ans;
      if(isLeftSumTree && isRightSumTree && cond){
         ans.first=true;
         ans.second=node->data+leftSum+rightSum;
      }
      else{
          ans.first=false;
      }
      return ans;
    }
    bool isSumTree(Node* node) {
        return isSumTreeFast(node).first;
    }
};

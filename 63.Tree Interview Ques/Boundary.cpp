class Solution {
  public:
    void traverseLeft(Node *root,vector<int>&ans){
        //Base case
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return;
        }
        ans.push_back(root->data);
        if(root->left){
            traverseLeft(root->left,ans);
        }
        else{
            traverseLeft(root->right,ans);
        }
    }
    void traverseLeaf(Node *root,vector<int>&ans){
        //Base case
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
    }
    void traverseRight(Node *root,vector<int>&ans){
        if((root==NULL) ||(root->left==NULL && root->right==NULL)){
            return;
        }
        if(root->right){
            traverseRight(root->right,ans);
        }
        else{
             traverseRight(root->left,ans);
        }
        //wapis aao gai
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        ans.push_back(root->data);
        
        //Left part print/store
        traverseLeft(root->left,ans);
        
        //Traverse leaf nodes --->Left subtree mai hoge 
        traverseLeaf(root->left,ans);
        //and ek --->right subtree mai hoge
        traverseLeaf(root->right,ans);
        
        //Traverse right part
        traverseRight(root->right,ans);
        
        return ans;
    }
};

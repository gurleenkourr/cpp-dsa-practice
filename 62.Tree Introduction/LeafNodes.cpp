/*
void postOrder(BinaryTreeNode<int>*root,int &count){
    //base case
    if(root==NULL){
        return;
    }
    //LRN
    postOrder(root->left,count);
    if((root->left==NULL) && (root->right==NULL)){
        count++;
    }
    postOrder(root->right,count);
   
   
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count=0;
    postOrder(root,count);
    return count;
}
*/
class Solution {
  public:
    int findPosition(vector<int> &inorder,int element,int n){
        
        for(int i=0;i<n;i++){
            if(inorder[i]==element){
                return i;
            }
            
        }
        return -1;
    }
    Node*solve(vector <int>&inorder,vector <int> &preorder,int &index,int inOrderStart,int inOrderEnd,int n){
        //Base case 
        if(index>=n || inOrderStart>inOrderEnd){
            return NULL;
        }
        int element=preorder[index++];
        Node*root=new Node(element);
        int position=findPosition(inorder,element,n);
        
        //Recursive calls
        root->left=solve(inorder,preorder,index,inOrderStart,position-1,n);
        root->right=solve(inorder,preorder,index,position+1,inOrderEnd,n);
        return root;
        
    }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        int preOrderIndex=0;
        int n=inorder.size();
        
        Node * ans=solve(inorder,preorder,preOrderIndex,0,n-1,n);
        return ans;
    }
};

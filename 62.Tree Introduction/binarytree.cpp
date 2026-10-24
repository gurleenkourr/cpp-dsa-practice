#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

/************************BUILD TREE USING RECURSION************************/
Node* buildTree(Node*root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new Node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
/************************LEVEL ORDER TRAVERSAL************************/
void levelOrderTraversal(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp==NULL){
            //purana wala level traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){
                //q still have some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            } 
        }
    }
}
/************************INORDER TRAVERSAL************************/
void inOrder(Node* root){
    //base case
    if(root==NULL){
        return;
    }
    //LNR
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
/************************PREORDER TRAVERSAL************************/
void preOrder(Node*root){
    //base case
    if(root==NULL){
        return;
    }
    //NLR
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
/************************POSTORDER TRAVERSAL************************/
void postOrder(Node*root){
    //base case
    if(root==NULL){
        return;
    }
    //LRN
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
/************************BUILD TREE USING LEVEL ORDER TRAVERSAL************************/
void buidFromLevelOrderTraversal(Node* &root){
    queue<Node*>q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    q.push(root);

    while(!q.empty()){
        Node*temp=q.front();
        q.pop();

        cout<<"Enter for left node: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left=new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter for right node: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp->right=new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){
    Node*root=NULL;
    buidFromLevelOrderTraversal(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
     levelOrderTraversal(root);

    /*
    //creating a tree
    root=buildTree(root);
    //1 3  7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    //Level order
    cout<<"Printing the level order Traversal output"<<endl;
    levelOrderTraversal(root);

    cout<<"InOrder traversal is: ";
    inOrder(root);
    cout<<endl;
    cout<<"preOrder traversal is: ";
    preOrder(root);
    cout<<endl;
    cout<<"postOrder traversal is: ";
    postOrder(root);
    */
}
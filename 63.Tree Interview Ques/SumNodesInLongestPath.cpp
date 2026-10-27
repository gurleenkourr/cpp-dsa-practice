class Solution {
  public:
    void solve(Node *root,int sum,int &maxsum,int length,int &maxlen){
        //Base case
        if(root==NULL){
            if(length>maxlen){
                //update length
                maxlen=length;
                //update sum
                maxsum=sum;
            }
            else if(length==maxlen){
                maxsum=max(sum,maxsum);
            }
            return;
        }
        sum=sum+root->data;
        solve(root->left,sum,maxsum,length+1,maxlen);
        solve(root->right,sum,maxsum,length+1,maxlen);
    }
    int sumOfLongRootToLeafPath(Node *root) {
        int length=0;
        int sum=0;
        int maxlen=0;
        int maxsum=INT_MIN;
        
        solve(root,sum,maxsum,length,maxlen);
        return maxsum;
    }
};

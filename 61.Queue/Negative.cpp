/*
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int>dq;
        vector<int>ans;
        int N=arr.size();
        
        //Process first window k size
        for(int i=0;i<k;i++){
            if(arr[i]<0){
                dq.push_back(i);
            }
        }
        //Store answer of first k sized window
        if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        //Process for remaining windows
        for(int i=k;i<N;i++){
            //Removal
            if(!dq.empty() && i-dq.front()>=k){
                dq.pop_front();
            }
            //Addition
            if(arr[i]<0){
                dq.push_back(i);
            }
            //Ans store
            if(dq.size()>0){
                ans.push_back(arr[dq.front()]);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
        
    }
};
*/
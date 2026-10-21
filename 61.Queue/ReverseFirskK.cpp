/*
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        //IMP
        if(k<=0 || k>q.size()){
            return q;
        }
        //Step 1: Pop first k elements from q and psuh to stack
        stack<int>s;
        for(int i=0;i<k;i++){
            s.push(q.front());
            q.pop();
        }
        //Step 2:Fetch from stack and push to q
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        //step 3:Fetch first(n-k)elements from q and push back
        int t=q.size()-k;
        for(int i=0;i<t;i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};
*/
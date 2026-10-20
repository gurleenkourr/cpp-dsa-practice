/*
class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        //Create stack
        stack<int>s;
        
        //Step 1
        while(!q.empty()){
            int element=q.front();
            q.pop();
            s.push(element);
        }
        //Step 2
        while(!s.empty()){
            int element=s.top();
            s.pop();
            q.push(element);
        }
    }
};
*/
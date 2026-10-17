/*
#include<bits/stdc++.h>
using namespace std;

class Solution {
  private:
  bool knows(vector<vector<int>>& mat,int A,int B,int n){
      if(mat[A][B]==1){
          return true;
      }
      else{
          return false;
      }
  }
  
  public:
    int celebrity(vector<vector<int>>& mat) {
        //Step 1--Push all element/persons in stack
        stack<int>s;
        int n=mat.size();
        for(int i=0;i<n;i++){
            s.push(i);
        }
        
        //Step 2-->Get two elements and compare them
        while(s.size()>1){
            int A=s.top();
            s.pop();
            
            int B=s.top();
            s.pop();
            
            if(knows(mat,A,B,n)){
                //A knows B
                s.push(B);
            }
            else{
                //B knows A
                s.push(A);
            }
        }
        //Step 3--> Single element in a stack is a potential celebrity
        //so verify it
        int ans=s.top();
        
        int zerocount=0;
        
        for(int i=0;i<n;i++){
            if(i!=ans && mat[ans][i]==0){
                zerocount++;
            }
        }
        //all zeros
        if(zerocount != n-1)
            return -1;

        int onecount=0;
        for(int i=0;i<n;i++){
            if(i!=ans && mat[i][ans]==1){
                onecount++;
            }
        }
        //all one
        if(onecount != n-1)
            return -1;
            
        return ans;
        
    }
};
*/
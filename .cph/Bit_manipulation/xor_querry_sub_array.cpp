#include<bits/stdc++.h>
using namespace std;


  vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {

        vector<int> pre;
        pre.push_back(arr[0]);

        for(int i=1; i<arr.size(); i++) {
            pre.push_back(pre[i-1] ^arr[i]);
        }

        vector<int> ans;
        for(int i=0; i<q.size(); i++) {
            int l= q[i][0];
            int r= q[i][1];

            if(l==0)
                ans.push_back(pre[r]);
            else 
                ans.push_back(pre[r] ^pre[l-1]);
        }
       
       return ans;

  }
        
 
   vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {

        vector<int> ans;

        for(int i=1; i<arr.size(); i++) 
            arr[i] ^= arr[i-1];
        

        for(int i=0; i<q.size(); i++) {
            int l= q[i][0];
            int r= q[i][1];

            if(l==0) ans.push_back(arr[r]);
            else ans.push_back(arr[r] ^ arr[l-1]);
        }

        return ans;
   }



 





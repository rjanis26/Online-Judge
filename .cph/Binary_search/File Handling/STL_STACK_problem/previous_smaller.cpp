#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> previous_small(int arr[], int n) {
    vector<int> ans;
    stack<int> st;

    for(int i=0; i<n; i++) {
        while(!st.empty() && st.top() >= arr[i])
            st.pop();
        
        (st.empty()) ? ans.push_back(-1) : ans.push_back(st.top());
        st.push(arr[i]);
    }

    return ans;
}

void printArr(vector<int> &arr) {
    for(const int x : arr) 
        cout << x <<" ";
    cout<< endl;
}

int main()
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    vector<int> ans = previous_small(arr,n);
    printArr(ans);

 

    return 0;
}
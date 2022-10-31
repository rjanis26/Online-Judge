#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_arr(vector<int> arr) {
    for(int i=0; i<arr.size(); i++)
        cout<< arr[i] <<" ";
    cout << endl;
}

vector<int> find_span(int arr[], int n) {
    stack<int> st;
    vector<int> ans;

    for(int i=0; i<n; i++) {
        while(!st.empty() and arr[st.top()] <= arr[i]) 
            st.pop();
        
        if(st.empty()) 
            ans.push_back(i+1);
        else {
            int top = st.top();
                ans.push_back(i-top);
        }
        st.push(i);
    }

    return ans;
}

int main()
{   
    int n; cin >> n; 
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    vector<int> ans = find_span(arr,n);
    print_arr(ans);
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define enl '\n'


// print the arr...
void print_arr(vector<int> &arr) {
    for(auto x : arr) 
        cout << x << " ";
    
    cout << endl;
}


// find the previous small element...
vector<int> previous_smaller(vector<int> &arr) {
   stack<int> st;
   vector<int> ans;
   int n = arr.size();
    for(int i=0; i<n; i++) {
        while(st.empty() == false and arr[st.top()] >= arr[i]) 
            st.pop();
        
        int ele = (st.empty()) ? -1 : st.top();
        ans.push_back(ele);
        st.push(i);
    }

    return ans;
}

// find the next small  element ...
vector<int> next_smaller(vector<int> &arr) {
    stack<int> st;
    vector<int> ans;
    int n = arr.size();
    for(int i=n-1; i>=0; i--) {
        while(st.empty() == false and arr[st.top()] >= arr[i])
            st.pop();
        
        int ele = (st.empty()) ? n : st.top();
        ans.push_back(ele);
        st.push(i);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int Largest_rectangle_area(vector<int> &arr) {
    int res = 0;
    int n= arr.size();
    vector<int> ps = previous_smaller(arr);
    vector<int> ns = next_smaller(arr);

    for(int i=0; i<n; i++) {
        int curr = (ns[i] - ps[i]-1) * arr[i];
        res = max(res, curr);
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
   vector<int> arr(n,0);
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    int ans = Largest_rectangle_area(arr);
    cout<< ans << endl;
 
    return 0;
}

 
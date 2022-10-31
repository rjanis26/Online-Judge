#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// print the vertor...
void printArr(vector<int> &arr) {
    for(const auto x: arr) 
        cout<<x << " ";
    cout<< endl;
}


// find the next smaller element using stack....
vector<int> next_smaller(int arr[], int n) {
    stack<int> st;
    vector<int> ans;

    for(int i=n-1; i>=0; i--) {
        while(!st.empty() && st.top() >= arr[i])    // top is greater than arr element...
            st.pop();
        
        (st.empty()) ? ans.push_back(n) : ans.push_back(st.top());
        st.push(arr[i]);    // push arr element into stack...
    }

    reverse(ans.begin(), ans.end());
    return ans;
}   


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];

    vector<int> ans = next_smaller(arr,n);
    printArr(ans);



    return 0;
}


int main()  
{
    


    return 0;
}
/* #include<bits/stdc++.h>
using namespace  std;
#define endl '\n';

void printNext_greater(int arr[], int n) {
    int next, i, j;
    for(i=0; i<n; i++) {
        next = -1;
        for(j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                next = arr[j];break;
            }
        }
        cout << arr[i] << "--> " << next << endl;
    }
}

int main() 
{   
    int n; cin >> n;
    int arr[n+1];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    printNext_greater(arr,n);


    return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace  std;
#define endl '\n';

void printNext_greater(int arr[], int n) {
    stack<int> st;
    int res[n];
    for(int i=n-1; i>=0; i--) {
        if(!st.empty()) {
            while(!st.empty() && st.top() <= arr[i])
                st.pop();
        }
        res[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }

    for(int i=0; i<n; ++i) 
        cout << arr[i] <<"-> " << res[i] << endl;
}

int main() 
{   
    int n; cin >> n;
    int arr[n+1];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    printNext_greater(arr,n);


    return 0;
}
 */


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

/* 
vector<ll> nextGreater(vector<ll> arr, int n) {
    stack<ll> st;
    vector<ll> ans;

    for(int i=n-1; i>=0;  i--) {
        while(!st.empty() && st.top() <= arr[i])
            st.pop();
        
        (st.empty()) ? ans.push_back(-1) : ans.push_back(st.top());

        st.push(arr[i]);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
 */
 



int main()
{





    return 0;
}

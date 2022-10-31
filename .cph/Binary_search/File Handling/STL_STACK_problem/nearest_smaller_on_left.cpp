 /*  #include<bits/stdc++.h>
using namespace  std;
#define endl '\n'

void find_nearest_small_left(int arr[], int n) {
    stack<int> st;
    for(int i=0; i<n; i++) {
        while(!st.empty() and st.top() >= arr[i])
            st.pop();
        
        if(st.empty()) 
            cout <<-1 <<", ";
        else 
            cout << st.top() << ", ";

        st.push(arr[i]);
    }
}

int main() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    find_nearest_small_left(arr,n);


    return 0;
} 
 */







// find next smaller element of right side...
 #include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void find_next_smaller_right(int arr[], int n) {
    stack<int> st;
    vector<int> ans;
    for(int i=n-1; i>=0; i--) {

         while(!st.empty() and st.top() >= arr[i])
            st.pop();
        
        // if(st.empty()) 
        //     ans.push_back(-1);
        // else 
        //     ans.push_back(st.top());

        (st.empty()) ? ans.push_back(-1) : ans.push_back(st.top());
 
        st.push(arr[i]);
    }

    reverse(ans.begin(), ans.end());
    for(int i=0; i<n; i++) 
        cout << ans[i] << " ";
        
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
 
    find_next_smaller_right(arr,n);
      
    return 0;
}
 

  
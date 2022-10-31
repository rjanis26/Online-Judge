/*  #include<bits/stdc++.h>
 using namespace std;
#define endl "\n"
#define ll long long int 

pair<ll, ll> getMin_max(ll arr[], int n) {
    ll min=arr[0], max=arr[0];

    while(n--) {
        if(arr[n] >=  max) 
            max=arr[n];
        if(arr[n] <= min) 
            min=arr[n];
    }

    pair<ll, ll> ans;
    ans.first=min; ans.second= max;
    return ans;
}

int main()
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    pair<ll, ll> p = getMin_max(arr,n);
    cout<< p.first << " " << p.second << endl;
 
    return 0;
} */


/* // find product...

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<ll> find_product(vector<ll> &arr, int n) {
    vector<ll> ans;

    for(int i=0; i<n; i++) {
        ll pod =1;
        for(int j=0; j<n; j++) {
            if(i==j) 
                continue;
            pod *= arr[j];
            
        }
       ans.push_back(pod);
    }
    return ans;
    
}

int main()
{

    int n; cin>>n;
     vector<ll> arr(n), vec(n);

    for(int i=0; i<n; i++)  
        cin>>arr[i];
    
    vec = find_product(arr,n);
    for(auto it:vec) 
        cout<< it << " ";
    cout << endl;
 

    return 0;
} */

/* 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int find_first_repreat(int arr[], int n) {
    
    unordered_map<int, int> m;

    for(int i=0; i<n; i++) 
        m[arr[i]]++;

    for(int i=0; i<n; i++) {
        if(m[arr[i]] >= 2) 
            return i+1;
    }
    return -1;

}

int main() 
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n; cin>>n;
    int arr[n+2];

    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    int ans = find_first_repreat(arr,n);
    cout<< ans << endl;
 

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(ll *arr, int n) {
    int *ans= new int[n];

    int k=0;
    int e=n-1;
    int i=0; 

    while(i < n) {
        ans[i] = arr[e];
        ans[i+1] =arr[k];

        k++;
        e--;
        i += 2;
    }

    for(int i=0; i<n; i++) 
        arr[i] = ans[i];
 

}

int main()
{
    int n; cin>>n;

    ll arr[n];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    solve(arr,n);
    for(int i=0; i<n; i++)
        cout<< arr[i] << " ";
    cout << endl;

 
    return 0;
}
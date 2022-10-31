/* 
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int l, int r) {
    int ans = 0;
    while( l <= r) {
        int mid = l+ (r-l)/2;

        if(mid < r and arr[mid+1] < arr[mid]) {
            
            ans = mid+1;
            break;
        } 
        else if(mid > l and arr[mid] < arr[mid-1]) {
            ans = mid;
            break;
        }
        else if(arr[r] > arr[mid])
            r = mid-1;
        else 
            l = mid+1;
    }
    return ans;
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
    
    cout<< solve(arr, 0, n-1) << endl;
 
    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

int solution(int arr[], int l, int r) {
    
    int ans=0; 
    while(l <= r) {
        int mid = l +(r-l)/2;
        if(mid < r && arr[mid] > arr[mid+1]) {
            ans = mid+1;
            break;
        }
        else if(mid>l && arr[mid] < arr[mid-1]) {
            ans = mid;
            break;
        }
        else if(arr[r] > arr[mid]) 
            r = mid-1;
        else 
            l = mid+1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n; 
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>>arr[i];

    cout << solution(arr,0,n-1) << endl;
 

    return 0;
} */
 
#include<bits/stdc++.h>
using namespace std;

int solution(int arr[], int l, int r) {
    
    int ans=0; 
    while(l <= r) {
        int mid = l +(r-l)/2;
       
        if(arr[mid] < arr[mid+1] && arr[mid] < arr[mid-1]) {
            ans = mid;
            break;
        }
        else if(arr[r] > arr[mid]) 
            r = mid-1;
        else 
            l = mid+1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n; 
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>>arr[i];

    cout << solution(arr,0,n-1) << endl;
 

    return 0;
} */


#include<bits/stdc++.h>
using namespace std;

// bruth force..
int count_rotations(int arr[], int n) {
    int  min=arr[0], min_index=0;

    for(int i=0; i<n; i++) {
        if( arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }
     
     return min_index;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>> arr[i];

    cout<<count_rotations(arr,n) <<endl;

 
    return 0;
}

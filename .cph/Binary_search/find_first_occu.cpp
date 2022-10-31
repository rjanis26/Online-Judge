/* 
#include<bits/stdc++.h>
using namespace std;

int find_first_occu(int arr[], int n, int value) {

    int left=0, right=n-1, ans=-1;

    while(left <= right) {
        int mid = left+(right-left)/2;

        if(arr[mid] == value) {
            ans = mid;
            right = mid-1;
        }
        else if(arr[mid] < value) {
            left = mid+1;
        }
        else 
            right = mid-1;
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

    
    int item; cin>>item;

    int ans = find_first_occu(arr, n, item);
    cout<<ans  << endl;


    return 0;
} */



#include<bits/stdc++.h>
using namespace std;

int find_last_occu(int arr[], int n, int value) {

    int left=0, right=n-1, ans=-1;

    while(left <= right) {
        int mid = left+(right-left)/2;

        if(arr[mid] == value) {
            ans = mid;
            left= mid+1;
        }
        else if(arr[mid] < value) {
            left = mid+1;
        }
        else 
            right = mid-1;
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

    
    int item; cin>>item;

    int ans = find_last_occu(arr, n, item);
    cout<<ans  << endl;


    return 0;
}  
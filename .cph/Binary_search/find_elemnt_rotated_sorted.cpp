 
#include<bits/stdc++.h>
using namespace std;

int count_rotation(int arr[], int l, int r) {
    int ans =0;
    while(l <= r) {
        int mid = l+(r-l)/2;

        if(mid < r && arr[mid+1] < arr[mid]) {
            ans = mid+1;
            break;
        }
        else if(mid > l && arr[mid] < arr[mid-1]) {
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

int binary_search(int arr[], int l, int r, int value) {
    int res= -1;
    while(l <= r) {
        int mid= l+(r-l)/2;
        if(arr[mid] == value) {
            res = mid;
            r = mid-1;
        }
        else if(arr[mid] < value) 
            l = mid+1;
        else
            r = mid-1;
    }
    return res;
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
    
    int index = count_rotation(arr, 0, n-1);
    int item; cin>>item;
    int ans1 = binary_search(arr,0, index-1, item);
    int ans2 = binary_search(arr, index,  n-1, item);
    int res =max(ans1, ans2);

    if(res == -1) 
        cout<< "Not found\n";
    else   
        cout << "found at at index: " << res << endl;

    return 0;
}

 

 
/* 
#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int value) {

    int l =0, r=n-1;
    while(l <= r) {
        const int mid =  l + (r-l)/2;

        if(arr[mid] == value) 
            return mid;
        if(arr[l] <= arr[mid]) {    // arr[l.....m] are soted..
            if(arr[l] <= value and value < arr[mid])    
                r = mid-1;
            else 
                l=mid+1;
        }
        else {
            if(arr[mid] < value and value <=arr[r])
                l=mid+1;
            else 
                r=mid-1;
        }
    }
    return -1;
}

 
int main()
{   

    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)  
        cin>>arr[i];
    
    int item; cin>> item;
    cout<< search(arr,n, item);

  
    return 0;
}   */



 
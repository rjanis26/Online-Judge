// array must be sorted
/* 
#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int item) {
   
   if(n==0) 
        return 0;


    int left=0, right=n-1;
    while(left <= right) {

        int mid = left+(right-left)/2;
        if(arr[mid] == item)
            return mid;
        else if (arr[mid] < item)
            left= mid+1;
        else 
            right = mid-1;

    }
    return -1;
}

int main()
{     
    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    int item; cin>>item;
    int index=binary_search(arr,n, item);

    if(index==-1)   
        cout<<"Not found\n";
    else   
        cout<< "item found at index: " << index<< endl;
 
    return 0;
} */


// find the fist and last occurrence..
/* 
#include<bits/stdc++.h>
using namespace std;

int find_first_occu(int arr[], int n, int value) {
     
    int left=0, right=n-1, ans=-1;
    while(left <= right) {
        int mid= left+(right-left)/2;

        if(arr[mid]==value) {
            ans =mid;
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
    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    
    int item; cin>>item; 
    int res= find_first_occu(arr,n, item);
    cout<<"fist occu: " << res << endl;

 

    return 0;
} */


// find last occurrence..

/* 
#include<bits/stdc++.h>
using namespace std;

int find_last_occu(int arr[], int n, int value) {
     
    int left=0, right=n-1, ans=-1;
    while(left <= right) {
        int mid= left+(right-left)/2;

        if(arr[mid]==value) {
            ans =mid;
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
    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    
    int item; cin>>item; 
    int res= find_last_occu(arr,n, item);
    cout<<"fist occu: " << res << endl;
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

int arr[100001], n;

int first_occu(int x) {

    int left=0, right=n-1, ans=-1;
    while(left <= right)  {
        int mid= left+(right-left)/2;

        if(arr[mid] == x) {
            ans=mid;
            right=mid-1;
        }
        else if(arr[mid] < x) 
                left=mid+1;
        else
            right=mid-1;
    }
    return ans;
}



int last_occu(int x) {

    int left=0, right=n-1, ans=-1;
    while(left <= right)  {
        int mid= left+(right-left)/2;

        if(arr[mid] == x) {
            ans=mid;
            left=mid+1;
        }
         else if(arr[mid] < x) 
                left=mid+1;
        else
            right=mid-1;
         
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >>n;
    for(int i=0; i<n; i++) 
        cin>> arr[i];

    int value; cin>> value;
    int a= first_occu(value);
    int b= last_occu(value);

    int ans = (b-a+1);
    cout<< ans << endl;

    return 0;

} */

/// array rotate count

#include<bits/stdc++.h>
using namespace std;


int main()
{
    


 

    return 0;
}
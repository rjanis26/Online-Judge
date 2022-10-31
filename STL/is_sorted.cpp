#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool is_sorted(int arr[], int n) {
    if(n == 0 or n == 1)  // array has one or no element 
        return true;
    
    for(int i=0; i<n-1; i++) {      // usorted pair found
        if(arr[i-1] > arr[i]) 
            return false;
    }
    return true;
}

int main() 
{

    //int arr[] = {1, 4, 2, 5, 3, 10, 22, 10};
    //int arr[] = {1, 3, 5, 6, 2, 11, 15};
    //int n = sizeof(arr)/sizeof(arr[0]);

    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) 
        cin>> arr[i];

    if(is_sorted(arr,n)) 
        cout << "Yes" << endl;
    else cout << "No" << endl;
     
    return 0;
}

// array left rotion...
#include<bits/stdc++.h>
using namespace std;

void rotate_left_one(int arr[], int n) {
    int temp = arr[0]; // first element
    for(int i=0; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

void rotate_left(int arr[], int n, int k) {
    for(int i=0; i<k; i++)  {
        rotate_left_one(arr, n);
    }
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 3, 5, 9, 11, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int rotation; cin>> rotation;
    print_array(arr,n);

    rotate_left(arr,n, rotation);
    print_array(arr,n);
     
 
 
    return 0;
}
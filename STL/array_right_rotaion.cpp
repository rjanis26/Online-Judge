
#include<bits/stdc++.h>
using namespace std;

void rotate_right_one(int arr[], int n) {
    int temp = arr[n-1]; // last element
    for(int i=n-2; i>=0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
}

void rotate_right(int arr[], int n, int k) {
    for(int i=0; i<k; i++) {
        rotate_right_one(arr, n);
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

    int arr[] = {1, 3, 5, 6, 11, 10, 15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int rotation; cin>>rotation;
    print_array(arr,n); 
    rotate_right(arr,n, rotation);
    print_array(arr,n);

 
    return 0;
}


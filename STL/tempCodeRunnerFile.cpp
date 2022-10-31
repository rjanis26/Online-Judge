#include<bits/stdc++.h> 
using namespace std;

void insert(int arr[], int n, int pos, int val) {
    for(int i=n-2; i>=0; i--) {
        arr[i+1] = arr[i];
    }
    arr[pos] = val;
}

void print_array(int arr[], int n)  {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 3, 6, 9, 10, 11, 24, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int pos, val; cin>> pos >> val;
    insert(arr,n, pos, val);
    print_array(arr,n);



    return 0;
}

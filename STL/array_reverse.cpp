
// array reverse 

#include<bits/stdc++.h>
using namespace std;

void array_reverse(int arr[], int n) {
    int left = 0, right = n-1;
    while(left < right)  {
        swap(arr[left++], arr[right--]);
    }
}

void print_array(int arr[], int n)  {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 4, 5, 9, 11, 3, 7, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    print_array(arr,n);
    array_reverse(arr,n);
    print_array(arr,n);
 
    return 0;
}
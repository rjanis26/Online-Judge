/* #include<bits/stdc++.h> 
using namespace std;

void delete_any_position (int arr[], int n, int pos) {
    for(int i=pos+1; i<n; i++) {
        arr[i-1] = arr[i];
        
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
    int arr[] = {1, 3, 6, 9, 10, 11, 24, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int pos ; cin>> pos;

    print_array(arr,n);
    delete_any_position(arr,n,pos);
    print_array(arr,n-1);
 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] << " ";
    cout<< endl;
}

void inset_position(int arr[], int n, int pos, int value) {
    if(pos < 0 or pos > n) 
        cout<< "Invalid position!" << endl;
    else {
        for(int i=n-1; i>= pos; i--) 
            arr[i+1] = arr[i];
        arr[pos] = value;
        n++;
    }
}

int main()
{
    int n; cin>> n; 
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    
    cout<< "Enter the positon: ";
    int pos; cin>>pos;

    cout<< "Enter the value: ";
    int value; cin>> value;

    cout<< "Given array: ";
    print_array(arr,n);
    cout<< endl;
    inset_position(arr,n, pos, value);
    print_array(arr, n+1);

 

    return 0;
}
 */


#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] << " ";
    cout<< endl;
}

void inset_position(int arr[], int n, int pos) {
    if(pos < 0 or pos > n) 
        cout<< "Invalid position!" << endl;
    else {
        
        for(int i=pos-1; i<n-1; i++) 
            arr[i] = arr[i+1];
        n--;
    }
}

int main()
{
    int n; cin>> n; 
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    
    cout<< "Enter the positon: ";
    int pos; cin>>pos;

   
    cout<< "Given array: ";
    print_array(arr,n);
    cout<< endl;
    inset_position(arr,n, pos );
    print_array(arr, n-1);

 

    return 0;
}

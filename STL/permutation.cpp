
#include<bits/stdc++.h>
using namespace std;


void print_array(vector<int> &arr, int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> arr;
    int n; cin>> n;
    int x;
    
    for(int i=0; i<n; i++) {
        cin >> x;
        arr.push_back(x);
    }
         
    while(next_permutation(arr.begin(), arr.end())) {
        print_array(arr, n);
    } 

    return 0;
}

 
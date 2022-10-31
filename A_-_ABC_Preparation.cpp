#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    vector<int> arr(4);
    for(auto &i : arr)
        cin >> i;
    
    sort(arr.begin(), arr.end());

    cout<< arr[0];



    return 0;
}
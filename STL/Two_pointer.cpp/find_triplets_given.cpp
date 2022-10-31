
// brutforces
/* 
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if(arr[i] + arr[j]+ arr[k]==x) {
                    cout << "(" << arr[i] <<", " << arr[j] <<", " << arr[k] << ") " << endl;
                }
            }
        }
    }
}

int main()
{

    int n; cin>>n;
    int arr[n+3];

    for(int i=0;i<n;i++)
        cin>> arr[i];

    sort(arr, arr+n);
    int x; cin>>x;
    solve(arr,n,x);

 
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int x) {

    int flag=0;
    for(int i=0; i<n; i++) {
        int l = i+1, r = n-1;
        while(l < r) {
            int sum = arr[i] + arr[l] + arr[r];
            if(sum == x) {
                cout << "(" << arr[i] << "," << arr[l] << "," << arr[r] <<")" << endl;
                flag =1;
            }
            if(sum > x) r--;
            else l++;
        }
    }
    if(flag==0) 
        cout << "Triplets not found" << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
    int n; cin>>n;
    int arr[n+3];

    for(int i=0;i<n;i++)
        cin>> arr[i];

    sort(arr, arr+n);
    int x; cin>>x;
    solve(arr,n,x);



    return 0;
}
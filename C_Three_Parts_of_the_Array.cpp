
#include<bits/stdc++.h>
using namespace std;

void solution()  {
    int n; cin>>n;
    int arr[n+3];
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    int sum1=0, sum2=0, ans=0;
    int l=0, r=n-1;
    
    while(l <= r) {
        if(sum1 < sum2) {
            sum1 += arr[l];
            l++;
        }
        else {
            sum2 += arr[r];
            r--;
        }
        if(sum1==sum2) ans=sum1;
    }
    cout << ans << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solution();
 
    return 0;
}
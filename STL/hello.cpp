/* 
#include<bits/stdc++.h>
using namespace std;

void soulotion() {
    int n; cin>> n;
    int arr[n+1];
    for(int i=0; i<n; i++) 
        cin >> arr[i];
    
    int pre_sum[n+1];
    pre_sum[0] = arr[0];

    for(int i=1; i<n; i++) 
        pre_sum[i] = pre_sum[i-1] + arr[i];

    int q; cin>> q;

    while(q--) {
        int l,r; 
        cin>>l >> r;
        if(l==0) 
            cout << pre_sum[r] << endl;
        else 
            cout << pre_sum[r] - pre_sum[l-1] << endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    soulotion();
 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

void solution() {

    int n; cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    int dif[n+2] = {0};
    int q; cin>>q;

    while(q--) {
        int l,r,val;
        cin>>l>>r>>val;
        dif[l] += val;
        dif[r+1] -= val;
    }

    for(int i=1; i<n; i++) 
        dif[i] += dif[i-1];
    
    for(int i=0; i<n; i++) 
        arr[i] += dif[i];
    
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;
    
}

int main()
{ 

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solution();
 
    return 0;
}

  */


#include<bits/stdc++.h>
using namespace std;

void solution() {

    int n; cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++) 
        cin >> n;

    int dif[n+2] = {0};
    int q; cin >> q;

    while(q--) {
        int l, r, val;
        cin >>l>>r>>val;
        dif[l] += val;
        dif[r+1] -= val;
    }

    for(int i=1; i<n; i++) 
        dif[i] += dif[i-1];
    
    for(int i=0; i<n; i++) 
        arr[i] += dif[i];

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solution();

    return 0;
}
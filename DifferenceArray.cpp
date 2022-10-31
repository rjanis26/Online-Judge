 /* 
#include<bits/stdc++.h>
using namespace std;
#define anis  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(nullptr);


int main()
{
    anis;

    int n; cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++) 
        cin>>arr[i];

    int diff[n+2] = {0};
    
    int q; cin>>q;
    
    while(q--) {
        int l, r, value;
        cin>>l >> r >> value;
        diff[l] += value;
        diff[r+1] -= value;
    }

    for(int i=1; i<n; i++) {
        diff[i] += diff[i-1];
    }

    for(int i=0; i<n; i++) {
        arr[i] += diff[i];
    }

    for(int i=0; i<n; i++) 
        cout<< arr[i] << " ";
    
    cout<< endl;

 

    return 0;
}  

 */
/* 
input: 

7
2 3 4 5 6 7 8
3
0 3 2
1 5 1
4 6 3
 
 */

 
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0; i<=(n); i++)
#define anis ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(nullptr);
#define endl "\n"


void solution() {

    int n; cin>>n;
    int arr[n+1];
    rep(i,n) 
        cin>>arr[i];

    int dif[n+2] = {0};

    int q; cin>>q;

    while(q--) {
        int l, r, value;
        cin>> l >> r >> value;
        dif[l] += value;
        dif[r+1] -= value;
    }

    for(int i=1; i<n; i++) 
        dif[i] += dif[i-1];  /// calculate the  prefix sum
    
    rep(i,n) 
        arr[i] += dif[i]; // add two array vlue;

    rep(i,n) 
        cout<< arr[i] << " ";

    cout<< endl;
}

int main()
{
    anis;

    solution();

    return 0;
}

 
 /*  
#include<bits/stdc++.h>
using namespace std;
#define anis ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(nullptr);


void solution() {

    int n,m;
    cin>>n >> m;
    int arr[n][m];

    for(int i=0; i<n; i++) { 
        for(int j=0; j<m; j++) {
            cin>>arr[i][j];
        }
    }


    int pre[n][m];
    pre[0][0] = arr[0][0];
    
    for(int i=1; i<m; i++) 
        pre[0][i] = pre[0][i-1] + arr[0][i];

    for(int i=1; i<n; i++) 
        pre[i][0] = pre[i-1][0] + arr[i][0];


    for(int i=1; i<n; i++) {
        for(int j=1; j<m; j++) {
            pre[i][j] = pre[i][j-1] + pre[i-1][j] + arr[i][j] - pre[i-1][j-1];
        }
    }

    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {

            cout << pre[i][j] << " ";
        }
        cout << endl;
    }
     

}


int main()
{
    
   anis;
   solution();
 
    return 0;
} */
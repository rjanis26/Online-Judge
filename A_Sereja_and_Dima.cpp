/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0; i<=(n); i++)
#define anis ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(nullptr);

int main()
{
    
    int n; cin>> n;
    int arr[n+3];
    for(int i=0; i<n; i++) cin>> arr[i];

    int i=0, j=n-1;
    int sereja=0, dema=0;
    int turn =1;


    while(i <= j) {
        if(turn % 2 == 1) {
            if(arr[i] < arr[j]) {
                sereja += arr[j];
                j--;
            }
            else {
                sereja += arr[i];
                i++;
            }
        }
        else {

            if(arr[i] < arr[j]) {
                dema += arr[j];
                j--;
            }
            else {
                dema += arr[i];
                i++;
            }
        }
        turn++;
    }

    cout << sereja << " " << dema << endl;

    return 0;
} */


#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define rep(i,n) for(int i=0; i<(n); i++)
#define repo(i,n) for(int i=0; i<=(n); i++)
#define anis ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(nullptr);

void solution()  {

    int n; cin>>n;
    int arr[n+3];
    rep(i,n) cin>> arr[i];

    int i=0, j=n-1;
    int sereja=0, dima=0;
    int turn=1;

    while(i <= j) {
        if(turn % 2 == 1) { 
            if(arr[i] > arr[j]) {
                sereja += arr[i];
                i++;
            }
            else {
                sereja += arr[j];
                j--;
            }
                 
        }
        else {
            if(arr[i] > arr[j]) {
                dima += arr[i];
                i++;
            }
            else {
                dima += arr[j];
                j--;
            }
        }
        turn++;
    }

    cout << sereja << " " << dima << endl;
}


int main()
{   
    anis;
    solution();


    return 0;
}
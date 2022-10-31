
     
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

int main()
{
    int n,k,x,y;

     cin>>n>>k>>x>>y;

     ll s=0;

     if(n<=k) s+=n*x;

     else s+=k*x+(n-k)*y;

     cout<<s<<endl;

   

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int N,K,X,Y,total;
    cin>>N;
    cin>>K;
    cin>>X;
    cin>>Y;
    if(N > K)
        total = (K * X) + (N - K) * Y;
    else
        total = N * X;
    cout<<total<<endl;
    return 0;
}
 

 
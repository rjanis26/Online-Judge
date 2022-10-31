 
/* 
 #include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    
    
   int n;
	cin>>n;
	int maxx=-1;
	int flag=1;
	for(int i=1;i<=n;i++){
		int temp=i;
		int kount=0;
		while(temp%2==0){
			temp/=2;
			kount++;
		}
		if(kount>maxx){
			maxx=kount;
			flag=i;
		}
 
	}
	cout<<flag<<endl;


    return 0;
}

  */
 



#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++) 
#define repp(i,n) for(int i=1; i<=(n); i++)

 
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n; cin>>n;
	int ans(0), mx(-1);

	repp(i,n) {
		int temp = i;
		int count(0);
		 while(temp%2==0) {
			temp/=2;
			count++;
		 }

		 if(count > mx) {
			mx = count;
			ans=i;
		 }

	}
	
	cout << ans;
   
    return 0;
}



 
/* 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
 
    int ans = 1;
    while (true)
    {
        ans *= 2;
        if (ans > n){
            cout << ans / 2 << endl;
            return 0;
        }
    }
}



#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int sum=0;
    for(int i=1; i<=n; i*=2)
    {
 
        if(i<=n)
        {
            sum=i;
        }
    }
    cout<<sum;
    return 0;
}  
  */
 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(i,n) for(int i=0; i<(n); i++) 
#define repo(i,n) for(int i=0; i<=(n); i++) 
#define repp(i,n) for(int i=1; i<=(n); i++)
 
int  main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n, sum(0);
	cin >> n;
  
    for(int i=1; i<=n; i*=2) {
		cout << i << " ";

		// if(i <= n) 	
		// 	sum=i;
  
    }
   // cout<<sum;
   
    return 0;
}
 */

 
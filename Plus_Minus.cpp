 #include<bits/stdc++.h> 
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++) 
#define endl "\n"

 

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>>n;
    int p=0, m=0, ans=0;
    for(int i=1; i<=n; i++) {
        char c; cin>>c;
        if(c =='+') {
            if(m > ans)
                ans = m;
            m=0;
            p++;
        }
           
        else {
            if(p > ans) 
                ans = p;
            p=0;
            m++;
        }
            
    }

    if(p > ans) 
        ans = p;
    if(m > ans) 
        ans = m;
    
    cout<< ans;

    return 0;
}

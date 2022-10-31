  
/* 
  #include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s1, s2, s3;
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    
      
     int num1=0,num2=0;

      cin>>s1;
     cin>>s2;
     for(int i=0;i<s1.size()+s2.size();i++)
     {
         if(i%2)
          {
             cout<<s2[num1++];
          }
          else
          {
              cout<<s1[num2++];
          }
      }
      cout<<endl;
    

      
    return 0;
}
 */
 
/* #include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string a, b;
    cin >> a >> b;
 
    string ans = "";
 
    int ai = 0;
    int bi = 0;
 
    for(int i = 1; i <= a.size() + b.size(); i++)
    {
        if(i % 2 != 0)
        {
            ans += a[ai];
            ai++;
        }
        else {
            ans += b[bi];
            bi++;
        }
    }
 
    cout << ans;
} */
/* 
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    //char e[102] ;
    int  c =0;
    int d =0;
    for(int i =0;i<a.length()+b.length();i++)
    {
        if(i%2==0)
        {
            cout<<a[c];
            c++;
        }else{
            cout<<b[d];
            d++;
        }
    }

    return 0;
} */


#include<bits/stdc++.h>
using namespace std;

void solution() {

    string a, b;
    cin >> a >> b;

    int c(0), d(0);
    for(int i=0; i<a.length() + b.length(); i++) {
        if(i%2==0)  
            cout<< a[c++];
        else 
            cout<< b[d++];
    }
}

int main() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solution();

    return 0;
}
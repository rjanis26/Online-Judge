/* #include<bits/stdc++.h> 
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++) 
#define endl "\n"

bool isPalindrome(string str, int len) {
    int i=0;
    while(i<(len/2)) {
        if(str[i] != str[len-i]) {
            return 0;
        }
        i++;
    }
    return 1;
}


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    string str;
    for(int i=0; i<n; i++) {
        cin>> str;
    }

    int len= str.size()-1;
    if(isPalindrome(str,len)) {
        cout<<"YES" <<  endl;
    }
    else {
        cout<< "NO" << endl;
    }


    return 0;
}


 */
/* 
 string s, rev;

    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--)
    {

        rev = rev + s[i];

    }

    if (s == rev)

    {

        cout << "YES" << endl;

    }

    else
  #include<bits/stdc++.h> 
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++) 
#define endl "\n"

bool isPalindrome(string str, int len) {
    int i=0;
    while(i<(len/2)) {
        if(str[i] != str[len-i]) {
            return 0;
        }
        i++;
    }
    return 1;
}


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    string str;
    for(int i=0; i<n; i++) {
        cin>> str;
    }

    int len= str.size()-1;
    if(isPalindrome(str,len)) {
        cout<<"YES" <<  endl;
    }
    else {
        cout<< "NO" << endl;
    }


    return 0;
}


 
 */



#include <bits/stdc++.h>

using namespace std;
 
int main()

{   


    string s, rev;
    int n; cin>>n;
    for(int i=0; i<n; i++) {
         cin >> s;
    }
   

    for (int i = s.length() - 1; i >= 0; i--)
    {

        rev = rev + s[i];

    }

    if (s == rev)

    {

        cout << "YES" << endl;

    }

    else
    {

        cout << "NO" << endl;

    }

    return 0;

}
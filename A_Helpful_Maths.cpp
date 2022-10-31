/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int main()
{       

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str, new_str;
    cin>> str;

    for(int i=0; i<str.length(); i+=2) 
        new_str.push_back(str[i]);

    sort(new_str.begin(), new_str.end());

    for(int i=0; i<new_str.length()-1; i++) 
        cout<< new_str[i] <<"+";
    
    cout << new_str[new_str.length()-1] << endl;
 
    return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{       

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str, s;
    cin>>str;
    
    int n= str.length();    
    for(int i=0; i<n; i+=2) 
        s.push_back(str[i]);
    
    sort(s.begin(), s.end());

    for(int i=0; i<s.length()-1; i++) 
        cout <<s[i]  << "+";

    cout << s[s.length()-1] << endl;

    //cout << s[s.length()-1] << endl;
     
    return 0;
} */




#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int main()
{       

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str, s;
    cin>>str;
    
    //int n= str.length();  
    for(int i=0; i<str.length(); i+=2) {
        for(int j=0; j<str.length()-1; j+=2) {
            if(str[i] < str[j]) {
                char temp = str[i] ;
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }  
    
    cout << str ;

    return 0;
}   

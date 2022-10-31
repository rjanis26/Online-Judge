 /*  #include<bits/stdc++.h>
using namespace std;


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

     string str, s;
    
    cin>>str;
    int n= str.size();
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i=0; i<n; i++) {
    
            if(str[i] == 'a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u' or str[i] =='y')
                continue;

            else {
                s+='.';
                s+=str[i];
            }
    }
      
 cout << s;
   

    return 0;
}  
   */

  

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solution() {
    string str, s; 
    cin>> str;

    transform(str.begin(), str.end(), str.begin(), :: tolower);
    for(int i=0; i<str.length(); i++) {
        if(str[i]=='a' or str[i] =='i' or str[i]== 'e' or str[i] == 'o' or str[i] == 'u' or str[i] == 'y')
            continue;
        else {
            s  += '.';
            s += str[i];
        }
    }
     cout<< s ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    solution();
     
    return 0;
}
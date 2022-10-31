
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

int main()
{

    string str;
    cin>> str;

    for(int i=0; i<str.size(); i++) {
        if(str[i] == 'a' or str[i]=='e' or str[i] =='i' or str[i] == 'o' or str[i] == 'u') 
            cout<< "vowel";
        else 
            cout << "consonant";
    }



    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int count_vowels(string str) {

    int count=0;
    for(int i=0; i<str.size(); i++) {
         
            switch(toupper(str[i])) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                count++;
            } 
    }
    return count;
}
 

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    string str;
    cin>>str;

    int ans = count_vowels(str);
    cout << ans << endl;
 
    return 0;
}
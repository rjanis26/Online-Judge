/* #include <iostream>
#include <string>
 
using namespace std;

bool isUnique(string);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    bool uniq;
    string a;
    
    getline(cin, a);
    uniq = isUnique(a);
    if (uniq == true)
        {
            cout << "yes" <<endl;
        }else{
            cout << "no" <<endl;
        }
    return EXIT_SUCCESS;


}

bool isUnique(string str){

int len = str.size();
bool uniq = true;

for (int i = 0; i <= len; ++i)
    {
        for (int j = i+1; j <= len; ++j)
        {
            if (str[j] == str[i])
            {
                uniq = false;
            }
        }
    }
return uniq;

} */


#include<bits/stdc++.h>
using namespace std;

int main()
{







    return 0;
}
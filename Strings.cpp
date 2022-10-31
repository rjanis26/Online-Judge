
#include<bits/stdc++.h>
using namespace std;


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    string str, str2;
    cin>> str;
    cin>>str2;

    cout<< str.size() << " " << str2.size() << endl;

    string full = str + str2;
    cout<< full << endl;

    swap(str[0], str2[0]);
    cout<<str << " " << str2 << endl;


    return 0;
}
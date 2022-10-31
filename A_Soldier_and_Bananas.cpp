#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int number_of_banana, dollars, want;
    cin>> number_of_banana>> dollars >>want;

    int total(0);
    for(int i=1; i<=want; i++) {
        total += i*number_of_banana;
    }

    int sum = total - dollars;

    if(sum <0) 
        cout<< 0;
    else cout<< sum << endl;

 
    return 0;
}
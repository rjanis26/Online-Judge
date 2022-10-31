
#include<bits/stdc++.h>
using namespace std;

char find_next_alphabat(string str, char ch, int n) {

    int l=0, r=n-1;
    char ans;

    while(l <= r) {
        int mid= l+(r-l)/2;

        if(str[mid] > ch) {
            ans = str[mid];
            r = mid-1;
        }
        else 
            l= mid+1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin>> str;
    char ch; cin>>ch;

    char ans = find_next_alphabat(str, ch, str.size());
    cout<< ans << endl;

    return 0;

 
}
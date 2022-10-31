
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

 
    int x, y, z; 
    cin >> x >> y >> z;

	if(x+y == z || y+z == x || z+x == y) 
    
    cout << "Yes" << endl;
	else cout << "No" << endl;
    

    return 0;
}
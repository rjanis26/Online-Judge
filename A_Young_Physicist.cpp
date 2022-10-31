  #include<iostream>
 #include<algorithm>
using namespace std;
#define ll long long int
#define endl "\n"


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>> n;

    int x, y, z, xsum(0), ysum(0), zsum(0);

    while(n--) {
        cin>> x >> y >> z;
        xsum+= x;
        ysum += y;
        zsum+= z;
    }   

    if(xsum==0 and ysum ==0 and zsum==0) 
        cout << "YES"<< endl;
    else cout<< "NO" << endl;
     
 
    return 0;
}  
 
 
   #include<bits/stdc++.h>
using namespace std;
 
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    int n;
    double arr;
     for(int i=1; i<=t; i++) {

        double sum = 0.0;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> arr;
            sum += arr;
        }   

        double avg = sum/(double)n;

         cout << setprecision(4) << "Case " << i << ": " << avg << endl ;
        //printf("Case %d: %.3lf\n", avg);
     }

 
    return 0;
}  
 

 
/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    double p;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        double sum = 0.0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> p;
            sum += p;

        }
        printf("Case %d: %.3lf\n", i, (sum/(double)n));

    }
    return 0;
}   */
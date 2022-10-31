
// check set bit 
// using right shift..


// count set bit
// using Right  Shift...
/* 
#include<bits/stdc++.h>
using namespace std;


int main()
{     
    int n; cin>>n;

    int count=0;

    // while(n!=0) {
    //     if((n&1) != 0) {
    //         count++;
    //     }
    //     n = n>>1;
    // }

    // cout<< count << endl;


    // using left shift....

    for(int i=0; i<32; i++) {
        if((n&(1 << i)) !=0) 
            count++;
    }

    cout << count <<endl;

      
    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;

    // int count=0;
    // while(n != 0) {

    //     if((n&1) !=0 ) {
    //         count++;
    //     }
    //     n >>= 1;
    // }

    // if(count==1)
    //     cout<< "Power 2." << endl;
    // else 
    //     cout << "Not power 2." << endl;

   
    if(n <= 0) 
        cout<< "Error\n";

    if((n&(n-1)) == 0)
        cout<< "power of 2.\n";
    else 
        cout<<"Not power of 2\n";

 
    return 0;

}

 */
/* 
#include<bits/stdc++.h>
using namespace std;

bool is_powerOf_two(unsigned int n) {
    if(n<=0)
        return false;

    if((n&(n-1))==0)
        return true;
    else return false;
}

int main()
{
    unsigned int n; cin>>n;

    bool ans=is_powerOf_two(n);
    if(ans)  
        cout<<"Yes" << endl;
    else cout<<"No" << endl;

 
    return 0;
}
 */

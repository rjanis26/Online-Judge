
#/* include<bits/stdc++.h>
using namespace std;

unsigned int coutn_set_bits(unsigned int n) {
    unsigned int count=0;

    while(n) {
        count += n&1;
        n>>=1;
    }
    return count;

}

int main() 
{ 
    unsigned int n; cin>>n;
    cout<< coutn_set_bits(n) <<endl;


    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void to_binary(unsigned int n) {
    for(int i= 1<<7; i>0; i/=2) {
        (n&i) ? cout<<"1" : cout<< "0";
    }
        
}

 int Total_set_bits(unsigned int n, unsigned l, unsigned r) {

    ll count = 0;

    // count total bits in a num;
    while(n) {
        count += n&1;
        n >>=1;
    }

    ll ans = ((1 << r)-1) ^ ((1 <<l-1)-1);
    count = count & ans;

    return count;
}
 

int main() 
{   
    unsigned int n; cin>>n;
    to_binary(n);

    cout<< endl;

    
    unsigned int l, r; cin>>l >> r;
    int ans= Total_set_bits(n,l, r);
    cout<< ans << endl;

    return 0;
} */

// C++ implementation to count set bits in the
// given range
/* 
#include <bits/stdc++.h>

using namespace std;

// Function to get no of set bits in the
// binary representation of 'n'
unsigned int countSetBits(int n)
{
	unsigned int count = 0;
	while (n) {
		n &= (n - 1);
		count++;
	}
	return count;
}

// function to count set bits in the given range
unsigned int countSetBitsInGivenRange(unsigned int n,
					unsigned int l, unsigned int r)
{
	// calculating a number 'num' having 'r' number
	// of bits and bits in the range l to r are the
	// only set bits
	int num = ((1 << r) - 1) ^ ((1 << (l - 1)) - 1);

	// returns number of set bits in the range
	// 'l' to 'r' in 'n'
	return countSetBits(n & num);
}

// Driver program to test above
int main()
{
	unsigned int n ; cin>>n;
	unsigned int l, r;  cin>>l>>r;
	cout << countSetBitsInGivenRange(n, l, r);
	return 0;
}
 */


/* 
#include<bits/stdc++.h>
using namespace std;

unsigned int count_set_bits(unsigned int n) {
    unsigned int count=0;
    while(n) {
        n&=(n-1);
        count++;
    }
    return count;
}

unsigned int count_bits_givenRange(unsigned int n, unsigned int l, unsigned r) {
    int num = ((1 << r)-1) ^ ((1 << (l-1)) -1);

    return count_set_bits(n &n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned int n; cin>>n;
    unsigned int l,r; cin>> l >>r;

    int ans = count_bits_givenRange(n, l,r);
    cout<< ans << endl;

 
    return 0;
} */


/* 
 
#include<bits/stdc++.h>
using namespace std;

unsigned int count_set_bits(unsigned int n) {

    unsigned int count=0;
    while(n) {
        n&=(n-1);
        count++;
    }
    return count;
}

// unsigned int count_bits_givenRange(unsigned int n, unsigned int l, unsigned r) {
//     int num = ((1 << r)-1) ^ ((1 << (l-1)) -1);

//     return count_set_bits(n &n);
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned int n; cin>>n;
    int ans = count_set_bits(n);
    cout<< ans << endl;

    // unsigned int l,r; cin>> l >>r;

    // int ans = count_bits_givenRange(n, l,r);
    // cout<< ans << endl;
 
    return 0;
} */

  
#include<bits/stdc++.h>
using namespace std;


int main()
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 


    return 0;
}
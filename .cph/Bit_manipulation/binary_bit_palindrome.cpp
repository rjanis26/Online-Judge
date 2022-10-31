/* 
#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(unsigned n) {
    unsigned rev = 0;

    unsigned k=n;
    while(k) {
        rev= (rev < 1) | (k&1);
        k = k >>1;
    }

    return n==rev;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned n; 
    cin>>n;
    
    if(is_palindrome(n))    
        cout<< "is palindrome." ;
    else 
        cout << "is not palindrome." ;                       ;
       
 
 
    return 0;
} */

/* 
#include <iostream>
using namespace std;
 
// Returns true if the binary representation of `n` is a palindrome
bool isPalindrome(unsigned n)
{
    // `rev` stores reverse of a binary representation of `n`
    unsigned rev = 0;
 
    // do till all bits of `n` are processed
    unsigned k = n;
    while (k)
    {
        // add the rightmost bit to `rev`
        rev = (rev << 1) | (k & 1);
        k = k >> 1;     // drop last bit
    }
 
    // Returns true if `reverse(n)` is the same as `n`
    return n == rev;
}
 
int main()
{
    int n ; cin>>n;        // 1001
 
    if (isPalindrome(n)) {
        cout << n << " is a palindrome";
    }
    else {
        cout << n << " is not a palindrome";
    }
 
 
    return 0;
}
 */


#include<stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int sundor= n;
    int last_digit=n%10;
    while(n >10) {
        n/=10;
    }
    int first_digit=n;
    int kaj_sesh=first_digit+last_digit;
    printf("%d = %d\n",sundor, kaj_sesh);

 
    return 0;
}
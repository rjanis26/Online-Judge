/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int gcd(int a, int b) {
    return (b==0) ? a : gcd(b, a%b);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


   
    int test; cin>> test;
    while(test--) {
         int a, b; cin>> a>> b;
        
        cout<< __gcd(a,b) << endl;
    
    }
  
    return 0;
} */ 
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// using uclid..

int gcd(int a, int b) {
    return (b==0) ? a : gcd(b, a%b);
}

int find_gcd(vector<int> &arr) {
    int ans = arr[0];
    for(int i=1; i<=arr.size(); i++) 
        ans = __gcd(arr[i], ans);   

    return ans;
    
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>>n; 
    vector<int> arr(n+2, 0);

    for(int i=0; i<n; i++) {
        int d; cin>>d;
        arr.push_back(d);
    }
    // for(int i=0; i<n; i++) 
    //     cin>>arr[i];
    
    int ans = find_gcd(arr);
    cout<< ans<< endl;
 

    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n) {

    if(n < 2) return false;
    if(n <= 3) return true;
    if(n % 2 ==0) return false;

    for(int i=3; i*i <= n; i += 2) {
        if(n%i==0) 
            return false;
    }

    return true;
}

int main()
{

    while(1) {
            int n; cin>>n;
        bool ans = is_prime(n);

        // if(ans == true) 
        //     cout << "Prime" <<endl;
        // else 
        //     cout<<"Not prime" << endl;

        (is_prime(n)== true) ? cout<<"Prime\n" : cout<< "Not prime\n";


    }



    return 0;
}
  */


/* 
#include<bits/stdc++.h>
using namespace std;

void seive(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int i=2; i*i <= n; i++) {
        if(prime[i] == true) {
            for(int j= i*i; j<=n; j+=i) 
                prime[i] = false;
        }
    }

    for(int i=2; i<=n; i++) {
        if(prime[i]== true) 
            cout << i <<" ";
    }
}

int main()
{
    int n; cin>>n;
    seive(n);
    
 

    return 0;
}

 */
/* 
// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for (int p=2; p*p<=n; p++)
	{
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples of p
			for (int i=p*2; i<=n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p=2; p<=n; p++)
	if (prime[p])
		cout << p << " ";
    cout<< endl;
}

// Driver Program to test above function
int main()
{   
    int n; 
    while(cin>>n) {
        SieveOfEratosthenes(n) ;
    }
	
	return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;

void seive(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    
    for(int i=2; i*i<=n; i++) {
        if(prime[i] == true) {
            for(int j=i*2; j<=n; j+=i) 
                prime[j] = false;
        }
    }

    for(int i=2; i<n; i++) {
        if(prime[i]) 
            cout<< i<< " ";
       
    }
    cout<< endl;
      
}

int main()
{
    int n; 
    while(cin>>n) 
        seive(n);
 

    return 0;
} */


#include<bits/stdc++.h>
using namespace std;

bool prime[90000001];
int n = 90000000;
vector<int> arr;

void seive(int n) {
    for(int i=2; i*i<=n; i++) {
        if(prime[i] == false) {
            for(int j= i*i; j<=n; j+=i) 
                if(prime[j] == true);
            
        }
    }

    for(int i=2; i<=n; i++) {
        if(prime[i] == false) 
            //arr.push_back(i);
            cout<< i << " ";
    }
}

int main()
{

    // seive();
    // int t; cin>>t;
    // while(t--) {
    //     int n; cin>>n;
    //     cout<<arr[n-1] << endl;
    // }

    int n ;cin>>n;
    seive(n);
    cout<< arr[n] << " ";
 
    return 0;
}
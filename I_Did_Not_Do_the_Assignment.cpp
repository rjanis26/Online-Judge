#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if(n <= 1) return false;
    
    for(int i=2; i<n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

void solution() {
    
    int n; cin>> n;
    if(is_prime(n)) 
        cout<< "NO PUNISHMENT" << endl;
    else {
        for(int i=0; i<n; i++) {
            cout << "I DID NOT DO THE ASSIGNMENT." << endl;
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);
    
    solution();

    return 0;
}
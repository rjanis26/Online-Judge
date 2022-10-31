//https://www.prodevelopertutorial.com/

/* 
#include<bits/stdc++.h>
using namespace std;

bool find_pair_sum(int arr[], int n, int sum) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j] == sum) {
                return true;
            }
        }
    }

}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
 
    return 0;
} */
   
/* 
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
  
bool solve(int arr[], int n, int mul) {

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] * arr[j] == mul) 
                return true;
        }
    }
    return false;
}

int main()
{
    int n; scanf("%d", &n);
    int arr[10001];

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int mul; scanf("%d", &mul);
    bool ans= solve(arr,n,mul);
   
    (ans==true) ? printf("YES\n") : printf("NO\n");
  
    return 0;
}    
 */
 
// using two pointer...
 /* 
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(int arr[], int n) {

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

bool solve(int arr[], int n, int mul) {
    int l=0, r=n-1;
    while(l < r) {
        int x = arr[l] * arr[r];
        if(x == mul) 
            return true;
        (x > mul) ? r-- : l++;
    }
    return false;
}

int main()
{
    int n; scanf("%d", &n);
    int arr[10001];

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    sort_array(arr,n);
    
    int mul; scanf("%d", &mul);
    bool ans= solve(arr,n,mul);
    
     (ans==true) ? printf("YES\n") : printf("NO\n");
       
    return 0;
}     
 */
/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
#define ll long long int

bool solve(int arr[], int n, int value) {
    int l=0, r=n-1;

    while(l < r) {
        int x = arr[l] * arr[r];
        if(x == value) return true;
        (x > value) ? r-- : l++;
    }
    return false;
}

int main()
{ 
    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    int value; cin>> value;
    bool ans = solve(arr,n,value);
    (ans==true) ? cout<< "Yes" : cout <<"No";
 
    return 0;
} */

 /* 

// Time complexity : O(n)

#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
#define ll long long int

bool solve(int arr[], int n, int value) {
    int l=0, r=n-1;

    while(l < r) {
        int x = arr[l] + arr[r];
        if(x == value) return true;
        (x > value) ? r-- : l++;
    }
    return false;
}

int main()
{

    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    int value; cin>> value;
    bool ans = solve(arr,n,value);
    (ans==true) ? cout<< "Yes" : cout <<"No";
 
    return 0;
}     */

// Find the pair closest to x.
 /* 
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int value) {
    int l=0, r=n-1;
    int idx1, idx2;
    int diff = INT_MAX;

    while(l < r) {
        int sum= arr[l]+arr[r];
        if(abs(sum-value) < diff) {
            idx1=l; idx2=r;
            diff= abs(sum-value);
        }
        (sum >value) ? r-- : l++;
    }
    cout<< "("<< arr[idx1] << "," << arr[idx2] << ") = "<< arr[idx1] + arr[idx2]  << endl;
} 

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);
    int value; cin>> value;
    solve(arr,n, value);

 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int value) {

    int l=0, r=n-1;
    int index1, index2;
    int diff= INT_MIN;  

    while(l < r) {
        int sum= arr[l]+arr[r];
        if(abs(sum-value) < diff) {
            index1= l;
            index2=r;
            diff=abs(sum-value);
        }
        (sum > value) ? r-- : l++;
    }

    cout<< "(" << arr[index1] << "," << arr[index2] <<") = " << arr[index1]+arr[index2] << endl;
}

int main()
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>>n;

    sort(arr, arr+n);

    int value; cin>>value;
    solve(arr, n, value);

 
    return 0;
} */  
  /* 
#include<bits/stdc++.h>
using namespace std;

bool elements_of (vector<int> ar, int value) {
    int n= ar.size();
    for(int i=0; i<n; i++ ) {
        if(value == ar[i])
            return true;
    }
    return false;
}

int main()
{   
    vector<int> v;
    int a, n;
    cin>>n; 
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
     

    int value; cin>> value;
    bool ans = elements_of(v,value);
    (ans== true)? cout<<"Yes\n" : cout<<"No\n";
    return 0;
}
 */
 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    

    return 0;
}
 
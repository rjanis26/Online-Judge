/* #include<bits/stdc++.h>
using namespace std;

int main()
{   
    string name;
    ofstream file;
    file.open("input.txt", ios::out | ios::app);
    
    cout<< "Enter your name: ";
    getline(cin, name);

    file<<"Welcome "<< name <<endl;

    file.close();
 
    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n) {
    int sum(0);
    for(int i=0; i<n; i++) 
        sum+=arr[i];
    
    return sum;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t, n;
    cin>>t;
   // while(t--)
   for(int i=1; i<=t; i++) {
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) 
            cin>>arr[i];
        
        cout << "Case " <<i << " : " << sum(arr,n)<< endl;
    }


    return 0;
} */;
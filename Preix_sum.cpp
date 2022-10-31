 
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    int arr[n+3];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    int pre_sum[n+3];
    pre_sum[0] = arr[0];

    for(int i=1; i<n; i++) {
        pre_sum[i] = pre_sum[i-1] + arr[i];

    }

    int q; cin>>q;

    while(q--) {
        int l,r;
        cin>>l >>r;
        if(l==0) 
            cout<< pre_sum[r];
        else 
            cout<< pre_sum[r] - pre_sum[l-1];
    }


    return 0;
}
   
  
 /* 
#include<bits/stdc++.h>
using namespace std;

void prefix_sum(int arr[], int n, int pre_sum[])  {
    pre_sum[0] = arr[0];
    for(int i=1; i<n; i++)  
        pre_sum[i] = pre_sum[i-1] + arr[i];
}

int main()
{

    int n; cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)  
        cin>>arr[i];

    int pre_sum[n+1];

    prefix_sum(arr,n,pre_sum);
    for(auto &it : pre_sum) 
        cout<< it << " ";
    
    cout<< endl;

    return 0;
}  */




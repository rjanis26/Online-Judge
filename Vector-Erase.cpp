/* #include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr;
    vector<int> v;
    for(int i=0; i<n; i++) {
        cin>>arr;
        v.push_back(arr);
    }

    
        int q,l, r; cin >> q>>l>>r;
        v.erase(v.begin()+q-1);
        v.erase(v.begin()+l-1, v.begin()+r-1);
       
    

    cout<< v.size()<<endl;
    for(int i=0; i<v.size(); i++) 
        cout << v[i] <<" ";


    return 0;
}

  */

 
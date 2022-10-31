
 /* #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> ar;

    for(int i=0; i<n; i++)  {
        int a; cin>>a;
        ar.push_back(a);
    }

    for(auto &it : ar) 
        cout << it << " ";
    
    cout<< endl;
 

    return 0;
} */
/*  

 #include<bits/stdc++.h>
using namespace std;

//main function
int main() {
   int a;
   vector<int> v;
   // user can add element as much as they want
   while(cin>>a)
   { 
       v.push_back(a);
   }
   for(auto &p : v)
   {
      cout<<p<<" ";
   }
   cout<<endl;
   return 0;
}

/*   

 #include<bits/stdc++.h>
 using namespace std;


 int main()
 {

    // vector<int> arr{1, -1, 10,  30, 20, 2, 5, 23, 3 ,11, 44};
    // sort(arr.begin(), arr.end());

    // for(auto it : arr) 
    //     cout<< it << " ";


    // cout<< "\n";
    // reverse(arr.begin(), arr.end());

    // for(auto &it : arr) 
    //     cout<< it << " ";


    // int arr[] = {1, 35, 6, 3, 0, 11, 22};
    // int n = sizeof(arr)/sizeof(arr[0]);
    
    // sort(arr, arr+n);

    // for(auto &it: arr) 
    //     cout<< it << " ";

    int arr[] =  { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> ar { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    sort(arr, arr+n, greater<int>());

    for(auto it : arr)
        cout<< it << " ";
    
    puts("\n");

    sort(ar.begin(), ar.end(), greater<int>());

    for(auto it : ar)
        cout<< it << " ";

 
    return 0;

 }

 */
 
/* 
#include<bits/stdc++.h>
using namespace std;

bool checker(string x, string y) {
    return x.size() > y.size();
}

int main()
{
    string str[] = {"a", "abc", "ba", "abcd"};
    int n = sizeof(str)/sizeof(str[0]);

    // cout<< n << endl;

    // sort(str, str+n);

    // for(auto it : str) 
    //     cout<< it << " ";

    sort(str, str+n, checker);
    
    for(auto it : str)
        cout << it << " ";

     

    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int> arr) {
    for(const auto &it : arr) 
        cout<< it << " ";
    cout << endl;
}

int main()
{

    vector<int> ar{23, 5, 4, 2, 10, 20, 1, 50};

    print_array(ar);

 
    return 0;
} */
 


#include<bits/stdc++.h>
using namespace std;

void find_min_max(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] << " ";

    cout<< endl;

}

int main() 
{
      


    return 0;
}
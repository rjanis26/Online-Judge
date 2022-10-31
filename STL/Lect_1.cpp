/* 
#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> ar = {1, 2, 3, 5, 7, 9};
    vector<int> :: iterator it;
    
    int first = *ar.begin();
    int second = *(ar.end()-1);

    //cout<< first << " " << second<< endl;
     
    // it = ar.begin()+2;
    // cout << *it << endl;

    for(int i=0; i<ar.size(); i++) {
        cout<< ar[i] << " ";
    }

    puts("\n");

    for(it = ar.begin(); it != ar.end(); it++) {
        if(*it == 3) {
            ar.erase(it);
        }
    }
        
    for(auto it : ar) 
        cout<< it << " ";


 
    return 0;
}
  */

 // set STL  in c++
/* 
 #include<bits/stdc++.h>
 using namespace  std;

 int main()
 { 
    set<int , greater<int>> s;
    set<int> :: iterator it;


    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.insert(4);
 
    cout << s.size() << endl;

    for(auto it: s)
        cout<< it << " ";

    

    return 0;
 } */


 // Pair in c++
/* 
 #include<bits/stdc++.h>
 using namespace std;


 int main()
 {

    vector<pair <char, int>> ar;
    vector<pair <char, int>> :: iterator it;
    
    ar.push_back({'A', 20});
    ar.push_back({'B', 50});
    ar.push_back({'C', 100});

    for(auto it: ar) 
        cout<< it.first << " " << it.second << endl;
 
    return 0;
 } */

 // map in c++
/* 
 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {

    map<int, int> mp;   //key value pair..
    
    vector<int> arr{1, 9, 3, 4, 3, 6, 9};

    for(int i=0; i<arr.size(); i++) {
        int x = arr[i];
        mp[x]++;
    }

    for(auto it: mp) 
        cout<< it.first << " " << it.second <<endl;
          
    return 0;
 } */

/* 
 #include<bits/stdc++.h>
 using namespace std;

 int main()
 { 
    bitset<5> b(10);

    cout<< b << endl;
    
    cout << b[0] << endl;
    cout << b[1] << endl;
 
    return 0;
 } */

/* 
 #include<bits/stdc++.h>
 using namespace std;

int main()
{

    // vector<int> arr{1, 3, 5, 7, 9, 11};
    // vector<int> :: iterator it;
 

    // int x; cin>>x;
 
    // if(binary_search(arr.begin(), arr.end(), x) == true)
    // cout<< "value has been found " << endl;
    // else 
    // cout<< "Not found" << endl;


    vector<int> arr = {0, 10, 1, 5, 2, -1, 6, 3,100};

    for(auto it: arr) 
        cout<< it << " "; 
    puts("\n");


    sort(arr.begin()+2, arr.begin()+6 );
 
    for(auto it: arr) 
        cout<< it << " ";
 
    return 0;
} */


/* https://www.includehelp.com/cpp-programming-examples-solved-cpp-programs.aspx */
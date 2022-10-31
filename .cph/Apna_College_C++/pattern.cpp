/* #include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n+1-i; j++) {
            cout<< j << " ";
        }
        cout<< endl;
    }
 
    return 0;
} */

  /* 
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if((i+j)%2==0) {
                cout << " 1";
            } 
            else {
                cout << " 0";
            }
        }
        cout<<endl;
    }
 
    return 0;
}  
 */
  
/* 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;

     for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout<< " ";
        }

        for(int j=1; j<=n; j++) {
            cout<<"#" << " ";
        }
        cout << endl;
     }
 
    return 0;
}   */



  /* 
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;

   for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout<< " ";
        }

        for(int j=1; j<=i; j++) {
            //cout<< i << " ";
            cout << j << " ";
        }

        cout<<endl;
   }
 
    return 0;
}  
 */

  /* 
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++)
            cout<< " ";
        
        for(int j=1; j<=i; j++) 
            cout<< j << " ";
        
        cout<< endl;
    }
     
 
    return 0;
} 

 */

 
  /* 
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    
    for(int i=1; i<=n; i++) {
        // for(int i=1; i<=n-i; i++)
        //     cout<< " ";
        for(int j=1; j<=i; j++)
            cout<< "*";
        cout << endl;
    }       

    for(int i=n; i>=1; i--) {
        // for(int i=1; i<=n-i; i++)
        //     cout<< " ";
        for(int j=1; j<=i; j++)
            cout<< "*";
        cout << endl;
    }   
     
 
    return 0;
}     */
 


 /* 
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++)
            cout<< " ";
        for(int j=1; j<=2*i-1; j++)
            cout<< "*";
        cout << endl;
    }       

    for(int i=n; i>=1; i--) {
        for(int j=1; j<=n-i; j++)
            cout<< " ";
        for(int j=1; j<=2*i-1; j++)
            cout<< "*";
        cout << endl;
    }   
     
 
    return 0;
}   */

/* 
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++)
            cout<< " ";
        for(int j=1; j<=2*i-1; j++)
            cout<< i;
        cout << endl;
    }       

    for(int i=n; i>=1; i--) {
        for(int j=1; j<=n-i; j++)
            cout<< " ";
        for(int j=1; j<=2*i-1; j++)
            cout<< j;
        cout << endl;
    }   
     
 
    return 0;
} 
 */


//     1                                                 
//    222
//   33333
//  4444444
// 555555555
// 123456789
//  1234567
//   12345
//    123
//     1

 /* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int row, col;
    cin>> row>> col;


    for(int i=1; i<=row; i++) {
        for(int j=1; j<=col; j++) {
            cout<< "*" << " ";
        }
        cout << endl;
    }
    
 
    return 0;
}
 /*  
 
 /*
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int row, col;
    cin>> row>> col;
    
    for(int i=1; i<= row; i++) {
        for(int j=1; j<=col; j++) {
            if(i==1 or i==row or j==1 or j==col) 
                cout<<"*" << " ";
            
            else cout<< " ";
        }
        cout<<endl;
    }
     
    return 0;
}
  */

 /* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>>n;
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) 
            cout<<i<< " ";
        cout<<endl;
    }
     
    return 0;
}
  */


 /* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) {
            if(j<= n-i) {
                cout<<" ";
            }
            else cout<< "*" << " ";
        }
        cout << endl;
         
    }   


    return 0;
}
  */
  /* 
#include<bits/stdc++.h>
using namespace std;

// bool is_prime(int n) {

//     if(n<=1) return false;
//     for(int i=2; i<=sqrt(n); i++) {
//         if(n%i==0) 
//          return false;
//     }

//     return true;
// }

bool is_prime(int n) {

    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;

    for(int i=3; i*i<=(n); i+=2) {
        if(n%i==0) 
            return false;
    }
    return true;
}

int main()
{   

    int l,r; cin>>l >>r;

    for(int i=l; i<=r; i++)  {
        if(is_prime(i) == true)
            cout<< i << " ";
         
    }
 
    return 0;
} 

  */

// factorial function in c++
/* 
#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
    int factorial = 1;
    for(int i=2; i<=n; i++)     
        factorial *= i;
    
    return factorial;
}

int main()
{
    int n; cin>>n;

    int ans = fact(n);
    cout << ans << endl;
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
    int factorial =1;
    for(int i=2; i<=n; i++) {
        factorial *= i;
    }

    return factorial;
}

int main()
{

    int n, r; cin>>n>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));
    cout << ans << endl;
 
    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;

int fact(int n) {   
    int factorial=1;
    for(int i=2; i<=n; i++) {
        factorial *= i;
    }

    return factorial;
} 

int main()
{

    int n; cin>>n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << fact(i)/(fact(j)*fact(i-j)) << " ";
        }
        cout << endl;
    }
    
    return 0;
}   */

/* 
#include<bits/stdc++.h>
using namespace std;

bool check(int x, int y, int z) {
    int a= max(x, max(y,z));

    int b, c;
    if(a==x) {
        b=y;
        c=z;
    }
    else if(a==y) {
        b=x;
        c=z;
    }
    else {
        b=x;
        c=y;
    }

    if(a*a== b*b + c*c)
        return true;
    else return false;
}
 
int main()
{
    int x,y,z;
    cin>> x>> y>>z;


    if(check(x, y,z)) 
        cout<< "Pythagorean triplate" << endl;
    else cout<< "Not Pythagorean"<< endl;

     
    return 0;
}   */

/*SUB ARRAY AND SUBSQUENCE.  */
/* 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    int sum=0;
    for(int i=0; i<n; i++) {
        sum=0;
        for(int j=i; j<n; j++) {
            sum += arr[j];
            cout <<  sum << " " ;
        }
    }

  
    return 0;
}   */
/* 
#include<bits/stdc++.h>
using namespace std;


int main()
{

    int row, col;
    cin>>row >> col;
    
    int arr[row][col];

    for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                cin >>arr[i][j];
            }
    }

    int sum(0);
    for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                 
                 sum += arr[i][j];
            }
    }

    for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                 cout<< arr[i][j] << " ";
            }
            cout<< endl;
    }
 
    cout<< sum;
 
    return 0; */
 
/* 
 #include<bits/stdc++.h>
 using namespace std;


 int main() 
 {
    int n, m;
    cin>>n >> m;


    int arr[n][m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) 
            cin>> arr[i][j];

    int flag=0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j] ==0) {
                flag=1;
                break;
            }
        }
    }

    if(flag==1) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                arr[i][j]=0;
                cout<< arr[i][j] << " ";
            }
            cout<<endl;
        }
    }

    else {
        for(int i=0; i<n; i++) {
            for(int j=0; j>m; j++) {
                cout<< arr[i][j] << " ";
            }

            cout<<endl;
        }
    }


    return 0;
 } */



 //check unique
/* 
#include<bits/stdc++.h>
using namespace std;
 

 int main()
 {

    string str;
    cin>>str;
    int free[122] = {0};

    int i;
    for(int i=0; i<str.size(); i++) {
        int x= str[i];
        free[x]++;
    }

    for(int i=0; i<=122; i++) {
        if(free[i] > 1) {
            cout<< "Not unique" <<endl;
            break;
        }
    }
 
    if(i== 123) 
        cout<< "all are unique" << endl;
 
    return 0;
 } */


/* 
 #include<bits/stdc++.h>
using namespace std;
int mian()

 {
    int n, m; cin>>n >> m;
    
    int arr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>> arr[i][j];
        }
    }

    int vlue; cin>>vlue;
    bool ans = false;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j] == vlue) {
                cout << "Inedx" << i <<" " <<j << endl;
                ans = true;
            }
        }
    }


    if(ans) {
        cout<< "Element found" <<"\n";
    }
    else cout << "Not found" << endl;


    return 0;
 } */
/* 
 #include<bits/stdc++.h>
 using namespace std;


int main()
{
    int n, m;
    cin>>n >> m;
    //  vector<vector<int>> v(n, vector<int> (m,0));

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<m; j++) {
    //         cout<< v[i][j] <<" ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> v(n, vector<int>(m));
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> v[i][j];
        }
    }


     for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<< v[i][j] << " ";
        }
        cout<< endl;
    }

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{   

    int n, m; 
    cin>>n >>m;
    vector<vector<int>> v(n, vector<int> (m));

    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v[0].size(); j++) {
            cin>> v[i][j] ;
        }
         
    }

    puts("");
    
    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v[0].size(); j++) {
            cout << v[i][j] <<" ";
        }
        cout<< endl;
    }

    cout<< "After sortign first row" << endl;

    sort(v[0].begin(), v[0].end());

    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v[0].size(); j++) {
            cout << v[i][j] <<" ";
        }
        cout<< endl;
    }

    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, m;
    cin>> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>> v[i][j];
        }
    }

    // print the array

    puts("");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<< v[i][j] << " ";
        }
        cout<< endl;
    }

    cout<< "After sorting the martix: " << endl;

    sort(v[i][j].begin(), v.end());

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<< v[i][j] << " ";
        }
        cout<< endl;
    }
 
    return 0;
}   */

/* 
#include<bits/stdc++.h>
using namespace std;

void print_arr(const vector<int> &arr) {
    cout << "size: " << arr.size() <<endl;
    for(auto it : arr)  
        cout<< it << " ";
    cout<< endl;
}

int main()
{

    int n; cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    print_arr(v);
 
    return 0;
} */
 /* 
#include<bits/stdc++.h>
using namespace std;

void print_array(vector<vector<int>> &data) {
    for(vector<int> row:data) {
        for(int col : row) 
            cout<< col <<" ";
        
        cout<< endl;
    }
}
 
int main()
{
    int n, m;
    cin>>n >> m;

    vector<vector<int>> v(n, vector<int> (m));

    print_array(v);


  */
 /*    
#include<bits/stdc++.h>
using namespace std;
 
void print_array(vector<vector<int>>&data) {
    
    for(vector<int> row : data) {
        for(int arr : row)
            cout << arr << " ";
        
        cout<< endl;
    }
}
  
int main()
{

    vector <vector <int>> v {{1, 3, 5}, {5, 7, 9}, {0, 1}};

    print_array(v);
      
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;


void print_array(vector<vector<int>>  arr) {
    for(vector<int> row : arr) {
        for(int col : row) 
            cout<< col << " ";
        cout << endl;
    }
}

int main()
{   
    int n=3, m=4;
     
    
    int value = 5;
    vector<vector<int>> vec ;
     
     for(int i=0; i<n; i++) {
        vector<int> v;
        for(int j=0; j<m; j++){
            v.push_back(value);
            value += 5;
        }
        vec.push_back(v);
     }

    print_array(vec);
 

    return 0;
} */
 /* 
#include<bits/stdc++.h>
using namespace std;

// Take Input from user..

vector <vector<int>> input() {

    vector <vector<int>> arr;
 
    for(int i=0; i<6; i++) {
        vector<int> row;

        for(int j=0; j<6; j++) {
            int value; cin>>value;
            row.push_back(value);
        }
        arr.push_back(row);
    }
    //cout<< arr[5][4] << endl;
    return arr;
}

int solve(vector <vector<int>> arr) {
    return -100000;
}

int main()
{

    vector <vector<int>> arr=input();
    cout<< solve(arr)<<"\n";

 
    return 0;
}
  
#include<bits/stdc++.h>
using namespace std;


int main() 
 

  */
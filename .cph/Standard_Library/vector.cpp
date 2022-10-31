/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(nullptr);

    vector<int> arr;
    vector<int> :: iterator it;

    arr.push_back(3);   // arr[0]
    arr.push_back(4);   // arr[1] 
    arr.push_back(-1);
    arr.push_back(6);      // and so on...
    arr.push_back(0);
    arr.push_back(100);
    arr.push_back(11);
    arr.push_back(22);


    for(it=arr.begin(); it != arr.end(); it++)
        cout << *it << " " ;
    cout<< endl;

    // cout << arr.size() << endl;

    // for(int i=0; i<arr.size(); i++) {
    //     cout << arr[i] << " ";
    // }    

    // cout << endl;
    
    // cout<< arr.at(0) << endl;
    // cout << arr[5] << endl;
    // cout<< arr.at(5);

    // cout<< arr.front() << endl;
    // cout << arr.back() << endl;
    
    // arr.clear();
    // // cout<< arr.size();

    //  if(arr.empty()) 
    //       cout << "empty" << endl;
    //  else cout << "Not empty" << endl;
     
    // arr.pop_back();

    // for(auto it : arr) 
    //     cout<< it << " ";
    // cout << endl;

    // arr.erase(arr.begin()+1, arr.end()-2);
     
    // for(auto it : arr)  
    //     cout<< it << " ";  


    // arr.insert(arr.begin()+2,3, 1);
    // arr.insert(arr.begin(), 0);

    // for(auto it : arr)
    //     cout<< it << " ";

    
    //  for(auto &it : arr) 
    //     cout<< it << " ";
    // cout << endl;

    // //sort(arr.begin(), arr.end(), greater<>());
    // sort(arr.begin() , arr.begin()+5);
    // for(auto &it : arr) 
    //     cout<< it << " ";
    // cout << endl;

    // reverse(arr.begin(), arr.end()-4);
    // for(auto &ar : arr)
    //     cout<< ar << " ";
    // cout<< endl;
 

    return 0;
}

  */

/* 
#include<bits/stdc++.h>
using namespace std;


int main()
{

    // stack<int> st;

    // st.push(1);
    // st.push(5);
    // st.push(4);
    // st.push(3);

    // // if(st.empty()) cout<< "yes" << endl;
    // // else cout<<"No" << endl;

    // // cout << st.size() << endl;

    // // cout<< st.top() << endl;
    
    // // while(!st.empty()) {
    // //     cout<<st.top() << " ";
    // //     st.pop();

    // // }

    // while(st.size()>0) {
    //     cout<< st.top()<< " ";
    //     st.pop();
    // }


    // queue<int> q;
    // q.push(5);
    // q.push(1);
    // q.push(4);
    // q.push(2);
    // q.push(10);
    // q.push(9);

   
    // // cout<< q.front() << endl;
    // // cout<< q.back() << endl;

    // q.pop();
    // q.pop();
    // while(!q.empty()) {
    //     cout<< q.front() << " ";
    //     q.pop();
    // }

    // priority_queue<int, vector<int>, greater<int>> pq;
    // pq.push(1);
    // pq.push(3);
    // pq.push(2);
    // pq.push(5);
    // pq.push(0);

    // while(!pq.empty()) {
    //     cout<< pq.top() << " ";
    //     pq.pop();
    // }

    // cout<< endl;

  
    return 0;
}
  
 */
 
/* 
#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int> &ar) {
    for(auto it: ar) 
        cout<< it << " ";
    cout << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    // vector<int> ar{1, 3, 5, 69, 10, 0};
    // print_array(ar);
    
    // vector<int> ar{1, 3, 5, 6, 9, 0};
    // ar.push_back(50);
    // ar.push_back(60);

    // for(auto it : ar) 
    //     cout<< it<< " ";
    // cout << endl;

    vector<int> ar{ 10, 5, 8, 4, 1, 2 };
    int item = 4;
    auto it = find(ar.begin(), ar.end(), item);

    if(it != end(ar))  
        ar.erase(it);
   
    else {
        cout << "Element not found" << endl;
    }
    
    for(auto it : ar)
        cout << it << " ";
    
    cout<< endl;


    return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;

void find_pair(int arr[], int n, int target) {
    
    int low=0, high=n-1;
    while(low < high) {
        int sum = arr[low] + arr[high];
        if(sum == target) {
            cout << "[" << arr[low] << "," << arr[high] <<"]" << endl;
            return ;
        } 
        (sum < target) ? low++ : high--;
    }
    cout << "Pair not found" << endl;
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

    int target; cin>> target;
    find_pair(arr,n, target);

 
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

    map<int, int> mp;
    mp.insert(make_pair(1, 3));
    mp.insert(make_pair(2, 5));
    mp.insert(make_pair(3, 10));
    mp.insert(make_pair(4, 15));


    for(auto it : mp) 
        cout<< it.first << " " << it.second << endl;
    
    mp.erase(3);

    puts("");
    for(auto it : mp) 
        cout<< it.first << " " << it.second << endl;

    puts("");
    cout << mp.count(1) << endl;

    auto it = mp.lower_bound(2);
    cout<<  (*it).first << " " << (*it).second << endl;



    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin>>n;
    int a;
    vector<int> v;
    for(int i=0; i<n;i++) {
        cin>>a;
        v.push_back(a);
    }

    for(auto it : v) 
        cout<< it <<" ";

    cout<<endl;
 
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

    int a,b; cin>>a >> b;

    cout<< "a = " << a  << ", b = " << b << endl;

    swap(a,b);
    cout<< "a = " << a << ", b = " << b << endl;
 
    return 0;
} */
/* 
#include<bits/stdc++.h> 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);   // for input and output faster...

    // int a=10, b=4;
    // cout<< min({4, 5, 69, 10}) << endl;
     
     int arr[] = {1, 3, 5,0, 6, 7, 9};
     int n= sizeof(arr)/sizeof(arr[0]);
    
   // cout<< *find(arr, arr+n, 5)  << "\n";
    
    //cout<< count(arr, arr+n, 3) << endl;
     
    return 0;
} */

// vector -> Dynamic array..
 /* 
#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int> data) {
    cout<<"Total Elements : " << data.size() << "\n";

    for(auto arr : data) 
        cout<< arr  << " ";
  
    cout<< "\n";
}


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL); 

    vector<int> data(5,2);
    print_array(data);

 
    return 0;
} 
 
 */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void find_next_smaller_right(int arr[], int n) {
    stack<int> st;
    vector<int> ans;

    for(int i=n-1; i>=0; i--)  {
        while(!st.empty() && st.top() >= arr[i]) 
            st.pop();
        
        int ele = (st.empty()) ? -1 : st.top();
        ans.push_back(ele);
        st.push(arr[i]);

    }

     reverse(ans.begin(), ans.end());
    for(int i=0; i<n; i++) 
        cout << ans[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    int arr[n+1];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }


    find_next_smaller_right(arr,n);

 

    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void print_arr(vector<int> &arr) {
    for(auto x : arr) 
        cout << x << " ";
    cout << endl;
}

vector<int> find_next_smaller(vector<int> &arr) {
    stack<int> st;
    vector<int> ans;
    int n= arr.size();
    for(int i=n-1; i>=0; i--) {
         while(!st.empty() and st.top() >= arr[i])
            st.pop();
        
        int ele = (st.empty()) ? -1 : st.top();
        ans.push_back(ele);
        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{   
    int n; cin >> n;
    vector<int> arr(n, 0);
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    vector<int> ans = find_next_smaller(arr);
    print_arr(ans);

    return 0;
} */

/* 

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
    T val;
    Node *Next;
    Node(T val)
    {
        this->val = val;
        this->Next = NULL;
    }
};

template <typename N>
void insertTail(Node<N> *&head, N val)
{
    Node<N> *newNode = new Node<N>(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node<N> *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

template<typename K>
int count_length(Node<K> *head){
    int count = 0;
    while (head != NULL)
    {
        head = head->Next;
        count++;
    }
    return count;
}

template <typename M>
bool checkPalindrome(Node<M> *head)
{
    int len = count_length(head);
    Node<M> *temp = head;

    char arr[len-1];

    bool isOk;
    M tempV;

    while (temp != NULL)
    {
        tempV = temp->val;
        temp = temp->Next;
    }

    Node<M> *temp1 = head;
    if (temp1->val == tempV)
    {
        int count = len-1;
        while (temp1 != NULL)
        {
            arr[count] = temp1->val;
            temp1 = temp1->Next;
            count--;
        }
        
        int count1 = 0;
        int isPalendrom = 0;
        while (head != NULL)
        {
            if (head->val == arr[count1]){
                isPalendrom++;
            }
            head = head->Next;
            count1++;
        }

        if (isPalendrom == len){
            isOk = true;
        } else {
            isOk = false;
        }
        
    }
    else
    {
        tempV = false;
        return tempV;
    }
    
    return isOk;
}

int main()
{
    Node<char> *head = NULL;
    int n;
    cin >> n;
    char val;
    while (n--)
    {
        cin >> val;
        insertTail(head, val);
    }

    bool isPlindrom = checkPalindrome(head);
    if (isPlindrom == true)
    {
        cout << "Yes Palindrome!";
    }
    else
    {
        cout << "Not Palindrome";
    }
} */
/* 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


bool is_valid(string s) {
    stack<char> st;
    for(auto str : s) {
        if(str=='(' or str=='{' or str=='[') 
            st.push(str);
        
        else if(st.empty()) 
            return false;
        
        else if(str==')' and st.top() != '(' or str=='}' and st.top() != '{' or str==']' && st.top() != '[')
            return false;

        else 
            st.pop();
    }

    return st.empty();
}


int main() 
{
    int n; cin>> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) 
        cin >> arr[i];

    
    for(int i=0; i<n+2; i++) 
        cout << arr.at(i) <<" ";
    cout << endl;



    return 0;

}


  stack<char> stk;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stk.push(c);
        } else if (stk.empty()) {
            return false;
        } else if  (c == ')' && stk.top() != '(' ||
                    c == ']' && stk.top() != '[' ||
                    c == '}' && stk.top() != '{') {
            return false;
        } else {
            stk.pop();
        }
    }
    return stk.empty(); */

/* 
    class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
    for(auto str : s) {
        if(str=='(' or str=='{' or str=='[') 
            st.push(str);
        
        else if(st.empty()) 
            return false;
        
        else if(str==')' and st.top() != '(' or str=='}' and st.top() != '{' or str==']' && st.top() != '[')
            return false;

        else 
            st.pop();
    }

    return st.empty();
        
        
        
        
    }
}; */
/* 

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

 
void deleteElement(stack<int> &st, int size) {
    int n= size;
    vector<int> ans;
    
    for(int i=0; i<n/2; i++) {
        ans.push_back(st.top());
        st.pop();
    }

    st.pop();
    // for(int i=ans.size()-1; i>=0; i--) 
    //     st.push(ans[i]);

    
    for(int i=0; i<ans.size(); ++i) 
        st.push(ans[i]);
   
}



void sortStack(stack<int> &st) {
    set<int> set;
    while(!st.empty()) {
        set.insert(st.top());
        st.pop();
    }

    for(const auto i : set)
        st.push(i);
}
 
  
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    stack<int> st;
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        st.push(arr[i]);
    }


    deleteElement(st, st.size());
    while(!st.empty()) {
        cout<< st.top() << " ";
        st.pop();
    }
    
 

    return 0;
}
  */




#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

 
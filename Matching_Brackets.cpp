/* 
#include<bits/stdc++.h>
using namespace std;

void solution() {

    stack<char> st;
    string str;
    cin>> str;

        for(int i=0; i<str.size(); i++) {
            if(str[i] == '(' or str[i] == '{' or str[i] == '[') {
                st.push(str[i]);
            }
            if(!st.empty()) {
                if(str[i] == ')') {
                    if(st.top() == '(')
                        st.pop();
                }
                if(str[i] == '}') {
                    if(st.top() == '{')
                        st.pop();
                }

                if(str[i] == ']') {
                    if(st.top() == '[') 
                        st.pop();
                }
            }
            else {
                st.push(str[i]);
            }

        }
    
     if(st.empty()) {
        cout<< "Yes" << endl;
     }
     else {
        cout<< "No" << endl;
     }
               
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solution();   

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solution() {
    stack<char> st;
    string str; cin>> str;
    for(int i=0; i<str.size(); i++) {
        if(str[i] == '(' or str[i] == '{' or str[i] == '[') 
            st.push(str[i]);
        
        if(!st.empty()) {
            if(str[i] == ')' && st.top() == '(')
                st.pop();
            
            if(str[i] == '}' && st.top() == '{') 
                st.pop();
            if(str[i] ==']' && st.top() == '[')
                st.pop();
        }

        else {
            st.push(str[i]);
        }

    }

    if(st.empty()) 
        cout<<"Yes" << endl;
    else    
        cout<< "No" << endl;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solution();
 
    return 0;
} */

 
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

void solution() {
    stack<char> st;
    string str; cin>> str;
    
    for(int i=0; i<str.size(); i++) {
        if(str[i] =='(' or str[i] == '{' or str[i] == '[')
            st.push(str[i]);

        if(!st.empty()) {
            if(str[i] == ')' && st.top() == '(')
                st.pop();
            if(str[i] =='}' && st.top() == '{') 
                st.pop();
            if(str[i] == ']' && st.top() == '[')
                st.pop();
        }

        else 
            st.push(str[i]);
    }

    if(st.empty()) 
        cout<< "Yes" << endl;
    else 
        cout<<"No" << endl;
}


int main()  
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solution();
 
    return 0;
}  
 
 
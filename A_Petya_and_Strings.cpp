/*   #include<bits/stdc++.h>
using namespace std;


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, str;
    cin>> s >>str;

    // for(int i=0; i<s.size(); i++) {
    //     s[i] = tolower(s[i]), str[i] = tolower(str[i]);
    // }

    for(int i=0; i<s.size(); i++) {
        if(s[i] < 'a') 
            s[i] += 32;
        if(str[i] < 'a') {
            str[i] += 32;
        }
    }

    if(s < str) 
        cout<<-1 << endl;
    else if(s > str)
        cout<< 1 << endl;
    else if(s==str)
        cout<< 0 << endl;
     
 
    return 0;
}
  
 */
 
  #include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<limits.h>


 int main() 
{
      char s[105],str[105];
     scanf("%s%s", s, str);
    for(int i=0;i<strlen(s);i++) {
        s[i] = tolower(s[i]), str[i] = tolower(str[i]);

    }
    
    // int ret = strcmp(s,s1);

    // if(ret<0) {
    //     printf("%d",-1);
    // }
    // else if(ret >0) {
    //     printf("%d", 1);
    // }
    // else {
    //     printf("%d",0);
    // }

    if(s < str) 
        printf("-1\n");
    else if(s > str) 
        printf("1\n");
    else if(s==str) 
        printf("0\n");
    return 0;  
    
}
  


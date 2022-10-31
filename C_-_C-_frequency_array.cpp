#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    string str;
  cin>> str;

  int len = str.size();

  int count[26] = {0};

  for(int i=0; i<len; i++) {
    int x = str[i] - 'a';
    count[x]++;
  }

  for(int i=0; i<26; i++) {
    if(count[i] == 0) {
      char c  = i+'a';
      cout<< c;
      return 0;
    }
  }

  cout<< "None";
   
    return 0;
}

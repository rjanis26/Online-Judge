/* #include<bits/stdc++.h>
using namespace std;

void copy(char str1[], char str2[]) {

    int i=0; 
    for(int i=0; str1[i] = '\0'; i++) {
        str2[i] = str1[i];
    }

    str2[i] = '\0';
}

int main()
{   
    char s1[100] = "Geekforgeeks";
    char s2[100] = "";

    copy(s1, s2);
    cout << s2;


    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;


int main()
{
    // string s = "Hello world";

    // cout << s << endl;

    //  string str(4, 'n');
    //  cout << str << endl;

    //  string str;

    // string s1 = "fam";
    // string s2 = "ily";
    // //s1.append(s2);
    // cout<< s1+s2 << endl;

    // string s1 = "abc";
    // string s2 = "xyz";

    // //cout<< s2.compare(s1) << endl;
    
    // if(s1.compare(s2)==0)
    //     cout<< "string are equal." << endl;

    // else cout << "Not equal" <


    // string str = "abc";

    // cout<< str <<endl;

    // if(!str.empty()) 
    //     cout<< "string is not empty" << endl;

    // string str = "nincompop";

    // str.erase(1, 3);
    // cout<< str << endl;

    // string str = "nincompoop";

    // str.insert(2, "lol");

    // cout << str << endl;



    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;


// void toUpper(string str) {
//     for(int i=0; i<str.size(); i++) {
//         if(str[i] >= 'a' && str[i] <= 'z') 
//             str[i] -= 32;
//     }
//     cout << str << endl;
// }



// void toLower(string str) {
//     for(int i=0; i<str.size(); i++) {
//         if(str[i] >'A' && str[i] <='Z')
//             str[i] += 32;
//     }
//     cout << str << endl;
// }


void convert(string str) {
    int n = str.size();

    for(int i=0; i<n; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') 
            str[i] -= 32;

        else if(str[i]>='A' && str[i] <= 'Z')
            str[i] += 32;
    }

    cout << str << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // convert to upper..

    // string str = "aaoiaghsdakasdr";

    // for(int i=0; i<str.size(); i++) {
    //     if(str[i] >= 'a' && str[i] <= 'z') 
    //         str[i] -= 32;
    // }

    // cout << str << endl;

    string str; 
    getline(cin, str);

    // toUpper(str);
    // puts("");

    // toLower(str);


    convert(str);

    return 0;
} */


#include<bits/stdc++.h>
using namespace std;


int main()
{

    string str = "afkfffdsadajfhk";
   // cout << 'a' -'A' << endl;

    // convert uppercase

    // for(int i=0; i<str.length(); i++) {
    //     if(str[i] >='a' && str[i] <='z') 
    //         str[i] -= 32;
    // }
    // cout << str << endl;

    // transform(str.begin(),str.end(), str.begin(), :: toupper);
    // cout << str << endl;

    // transform(str.begin(), str.end(), str.begin(), :: tolower);
    // cout<< str << endl;


    // sort(str.begin(), str.end(), greater<int>());
    // cout<< str << endl;

    int count[26] = {0};

    for(int i=0; i<str.length(); i++) {
        count[str[i]-'a']++;
    }

    int maxF=0;
    char ans = 'a';

    for(int i=0; i<26; i++) {
        if(count[i] > maxF) {
            maxF = count[i];
            ans = i+'a';
        }
    }

    cout << maxF << " " << ans << endl;


    return 0;
}
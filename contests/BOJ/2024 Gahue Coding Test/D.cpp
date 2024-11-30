#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    getline(cin,s);
    string a("");
    string b("");
    bool d=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]==')'){
            d=1;
            continue;
        }
        if(d) b+=s[i];
        else a+=s[i];
    }
    cout << a << '\n';
    if(b.length()>0) cout << b;
    else cout << '-';
    return 0;
}
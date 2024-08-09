#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int te;
    cin >> te;
    while(te--){
        string s,t;
        cin >> s >> t;
        int idx=0;
        for(int i=0;i<s.length();i++){
            if(idx==t.length()) break;
            if(s[i]==t[idx]) idx++;
            else if(s[i]=='?') s[i]=t[idx++];
        }
        if(idx==t.length()){
            cout << "YES\n";
            for(int i=0;i<s.length();i++) if(s[i]=='?') s[i]='a';
            cout << s << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}
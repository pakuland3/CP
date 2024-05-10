#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        int cnt[26]={0,};
        cin >> s;
        for(int i=0;i<s.length();i++) cnt[s[i]-'a']++;
        if(cnt[s[0]-'a']==s.length()) cout << "NO";
        else{
            cout << "YES\n";
            for(int i=1;i<s.length();i++) cout << s[i];
            cout << s[0];
        }
        cout << '\n';
    }
    return 0;
}
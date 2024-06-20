#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> cnt(7,0);
        string s;
        cin >> s;
        for(int i=0;i<s.length();i++) cnt[s[i]-'A']++;
        int ans=0;
        for(int i=0;i<7;i++) if(cnt[i]<m) ans+=m-cnt[i];
        cout << ans << '\n';
    }
    return 0;
}
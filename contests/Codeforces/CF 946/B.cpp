#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        vector<bool> cnt(26,0);
        vector<char> r;
        vector<int> ind(26,0);
        cin >> s;
        for(int i=0;i<s.length();i++){
            if(!cnt[s[i]-'a']){cnt[s[i]-'a']=1; r.push_back(s[i]);} 
        }
        sort(r.begin(),r.end());
        for(int i=0;i<r.size();i++) ind[r[i]-'a']=r.size()-(i+1);
        for(int i=0;i<s.length();i++) cout << r[ind[s[i]-'a']];
        cout << '\n';
    }
    return 0;
}
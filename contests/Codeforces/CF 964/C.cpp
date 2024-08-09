#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,s,m;
        cin >> n >> s >> m;
        vector<pair<int,int>> a(n);
        for(auto &p:a) cin >> p.first >> p.second;
        int start=0;
        int interval=0;
        for(auto &p:a){
            interval=max(interval,p.first-start);
            start=p.second;
        }
        interval=max(interval,m-start);
        if(s<=interval) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
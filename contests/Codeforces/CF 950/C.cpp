#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n;
        vector<int> a(n),b(n),difs;
        for(int &s:a) cin >> s;
        for(int i=0;i<n;i++){
            cin >> b[i];
            if(b[i]!=a[i]) difs.push_back(b[i]);
        }
        cin >> m;
        vector<int> d(m),tmp(difs); sort(tmp.begin(),tmp.end());
        for(int &s:d) cin >> s;
        sort(b.begin(),b.end());
        if(!binary_search(tmp.begin(),tmp.end(),d[m-1]) && tmp.size()>0 && !binary_search(b.begin(),b.end(),d[m-1])){
            cout << "NO\n";
            continue;
        }
        sort(d.begin(),d.end());
        bool no=0;
        for(int i=0;i<difs.size();i++){
            auto it=lower_bound(d.begin(),d.end(),difs[i]);
            if(it==d.end() || *it!=difs[i]){no=1; break;}
            d.erase(it);
        }
        if(no) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
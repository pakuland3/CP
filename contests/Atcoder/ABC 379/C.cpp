#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n,m;

struct t{
    ll x,a;
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> m;
    vector<t> tt(m+1);
    ll res=0;
    tt[m].x=n+1;
    for(int i=0;i<m;i++) cin >> tt[i].x;
    for(int i=0;i<m;i++) cin >> tt[i].a;
    sort(tt.begin(),tt.end(),[](t &l, t &r) -> bool { return l.x<r.x; });
    if(tt[0].x>1){
        cout << -1;
        return 0;
    }
    for(int i=0;i<m;i++){
        if(tt[i].a<tt[i+1].x-tt[i].x || (i==m-1 && tt[i].a>tt[i+1].x-tt[i].x)){
            cout << -1;
            return 0;
        }
        tt[i+1].a+=tt[i].a-(tt[i+1].x-tt[i].x);
        res+=(tt[i+1].x-tt[i].x-1)*(tt[i+1].x-tt[i].x)/2ll+(tt[i+1].x-tt[i].x)*(tt[i].a-(tt[i+1].x-tt[i].x));
    }
    cout << res;
    return 0;
}
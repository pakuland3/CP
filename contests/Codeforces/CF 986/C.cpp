#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        ll v;
        cin >> n >> m >> v;
        vector<ll> a(n),sum(n+1,0);
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum[i+1]=sum[i]+a[i];
        }
        auto solve=[&]() -> vector<int> {
            vector<int> pfx(n+1,0);
            int e=0;
            ll rsum=0;
            for(int s=0;s<n;s++){
                while(e<n && rsum<v){
                    rsum+=a[e];
                    e++;
                    pfx[e]=max(pfx[e],pfx[e-1]);
                }
                if(rsum>=v) pfx[e]=pfx[s]+1;
                rsum-=a[s];
            }
            for(int i=1;i<=n;i++) pfx[i]=max(pfx[i],pfx[i-1]);
            return pfx;
        };
        auto getsum=[&](int a, int b){ return sum[b]-sum[a]; };
        auto pfx=solve();
        if(pfx[n]<m){
            cout << "-1\n";
            continue;
        }
        reverse(a.begin(),a.end());
        auto sfx=solve();
        reverse(sfx.begin(),sfx.end());
        int e=0;
        ll ans=0;
        for(int s=0;s<n;s++){
            while(e<n && pfx[s]+sfx[e+1]>=m) e++;
            if(pfx[s]+sfx[e]>=m) ans=max(ans,getsum(s,e));
        }
        cout << ans << '\n';
    }
    return 0;
}
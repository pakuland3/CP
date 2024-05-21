#include <bits/stdc++.h>
#define f first
#define s second
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll ans=0;
        vector<int> a(n);
        map<pair<int, int>, ll> l,m,r;
        map<tuple<int, int, int>, ll> tm;
        for(int &u:a){
            cin >> u;
        }
        for(int i=0;i<n-2;i++){
            pair<int, int> nl,nm,nr;
            nl.f=a[i+1]; nl.s=a[i+2];
            nm.f=a[i]; nm.s=a[i+2];
            nr.f=a[i]; nr.s=a[i+1];
            tuple<int,int,int> tp=make_tuple(a[i],a[i+1],a[i+2]);

            if(l.find(nl)!=l.end()){
                ans+=l[nl];
                if(tm.find(tp)!=tm.end()) ans-=tm[tp];
                l[nl]++;
            }
            else l[nl]=1;

            if(m.find(nm)!=m.end()){
                ans+=m[nm];
                if(tm.find(tp)!=tm.end()) ans-=tm[tp];
                m[nm]++;
            }
            else m[nm]=1;

            if(r.find(nr)!=r.end()){
                ans+=r[nr];
                if(tm.find(tp)!=tm.end()) ans-=tm[tp];
                r[nr]++;
            }
            else r[nr]=1;

            if(tm.find(tp)==tm.end()) tm[tp]=1;
            else tm[tp]++;
        }
        cout << ans << '\n';
    }
    return 0;
}
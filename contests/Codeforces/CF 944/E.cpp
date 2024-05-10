#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k,q;
        cin >> n >> k >> q;
        vector<ll> a(k+1),b(k+1);
        a[0]=b[0]=0;
        for(int i=1;i<=k;i++) cin >> a[i];
        for(int i=1;i<=k;i++) cin >> b[i];
        //쿼리별 구간 탐색은 upper_bound() 하고 그 전 구간
        while(q--){
            ll d;
            int pn;
            cin >> d;
            if(d==0) pn=0;
            else pn=lower_bound(a.begin(),a.end(),d)-a.begin()-1;
            cout << b[pn]+(d-a[pn])*(b[pn+1]-b[pn])/(a[pn+1]-a[pn]) << ' ';
        }
        cout << '\n';
    }
    return 0;
}
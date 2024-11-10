#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<ll> a(k+1,0);
        for(int i=0;i<k;i++){
            ll idx,costs;
            cin >> idx >> costs;
            a[idx]+=costs;
        }
        ll res=0;
        sort(a.begin(),a.end(),greater<ll>());
        for(int i=0;i<min(n,k);i++) res+=a[i];
        cout << res << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        ll res=0,cur=0;
        cin >> n >> k;
        vector<ll> a(n);
        for(ll &t:a) cin >> t;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(k<=0) break;
            a[i]-=cur;
            cur+=a[i];
            res+=(k>a[i]*(n-(ll)i)?a[i]*(n-(ll)i)+1:k);
            k-=a[i]*(n-i);
        }
        cout << res << '\n';
    }
    return 0;
}
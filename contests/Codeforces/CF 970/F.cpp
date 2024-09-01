#include <bits/stdc++.h>
#define MOD 1000000007ll
typedef long long ll;
using namespace std;

ll p(ll a, ll n){
    if(n==0) return 1ll;
    if(n==1) return a;
    ll c=p(a,n/2)%MOD; c*=c; c%=MOD;
    if(n%2) return (c*a)%MOD;
    return c;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a=0,b,c[200000];
        for(int i=0;i<n;i++){
            cin >> c[i];
            if(i!=0) c[i]+=c[i-1];
        }
        for(int i=0;i<n-1;i++){
            ll cur=c[i]-(i!=0?c[i-1]:0);
            a+=((cur%MOD)*((c[n-1]-c[i])%MOD))%MOD;
            a%=MOD;
        }
        b=(n*(n-1)/2ll)%MOD;
        cout << (a%MOD*p(b,MOD-2ll)%MOD)%MOD << '\n';
    }
    return 0;
}

// #include <bits/stdc++.h>
// typedef long long ll;
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(NULL);
//     freopen("output.out","w",stdout);
//     for(int i=0;i<200000;i++){
//         cout << i << ' ';
//         if(i%10000) cout << '\n';
//     }
//     return 0;
// }
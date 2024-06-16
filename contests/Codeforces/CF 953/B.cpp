#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n,a,b;
        cin >> n >> a >> b;
        if(a>=b){cout << a*n << '\n'; continue;}
        ll ans=a*n;
        ll cnt=min(b-a,n);
        ans+=cnt*(2*b-cnt+1)/2-cnt*a;
        cout << ans << '\n';
    }
    return 0;
}
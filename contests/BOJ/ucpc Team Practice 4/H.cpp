#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    ll ans=n;
    for(int i=2;i<=n;i++){
        ans+=(n-i)/i+1;
        if((n-i)%i!=0) ans++;
    }
    cout << ans;
    return 0;
}
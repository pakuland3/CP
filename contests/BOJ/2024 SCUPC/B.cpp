#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll r,k,m;
    cin >> r >> k >> m;
    k=m/k;
    k=min(k,70ll);
    while(k--) r/=2ll;
    cout << r;
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    ll a=1,t,g;
    for(int i=0;i<n;i++){
        cin >> t;
        g=gcd(t,a);
        a*=t/g;
    }
    cout << a*2;
    return 0;
}
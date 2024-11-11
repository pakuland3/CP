#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n,b,c;
        cin >> n >> b >> c;
        if(b==0 && c<n-2){
            cout << "-1\n";
            continue;
        }
        if(b==0){
            cout << n-(c<n) << '\n';
            continue;
        }
        ll cnt=(n-c)/b;
        if(n-c>b*cnt) cnt++;
        if(c>=n) cnt=0;
        cout << n-cnt << '\n';
    }
    return 0;
}
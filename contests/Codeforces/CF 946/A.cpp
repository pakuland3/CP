#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(y==0){cout << (x/15+(x%15==0?0:1)) << '\n'; continue;}
        int ans=y/2+y%2;
        int rem=y%2*4+ans*7;
        if(x<=rem) cout << ans;
        else cout << (ans+(x-rem)/15+((x-rem)%15==0?0:1));
        cout << '\n';
    }
    return 0;
}
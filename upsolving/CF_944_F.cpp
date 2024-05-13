#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll x=-1,r,ans=0;
        cin >> r;
        ll y=r;
        ll distance;
        while(++x<=r){
            while(x*x+y*y>=(r+1)*(r+1)) y--;
            while(x*x+y*y>=r*r && y>0){
                ans++;
                y--;
            }
            y++;
        }
        cout << 4*ans << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll l,r;
        cin >> l >> r;
        ll s=0,e=r-l;
        while(s<=e){
            ll mid=(s+e)/2;
            if(mid*(mid+1)/2<=r-l) s=mid+1;
            else e=mid-1;
        }
        cout << e+1 << '\n';
    
    }
    return 0;
}
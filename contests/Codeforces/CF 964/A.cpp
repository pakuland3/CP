#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        int ans=0;
        ans+=n[0]+n[1]-2*'0';
        cout << ans << '\n';
    }
    return 0;
}
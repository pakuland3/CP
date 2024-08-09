#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        int ans=0;
        cin >> a >> b >> c >> d;
        if(a>c && b>=d) ans++;
        else if(a>=c && b>d) ans++;
        if(a>d && b>=c) ans++;
        else if(a>=d && b>c) ans++;
        cout << 2*ans << '\n';
    }
    return 0;
}
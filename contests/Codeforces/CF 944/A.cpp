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
        cout << min(x,y) << ' ' << max(x,y) << '\n';
    }
    return 0;
}
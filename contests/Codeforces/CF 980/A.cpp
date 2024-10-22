#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        int a,b;
        cin >> a >> b;
        if(a>=b){
            cout << a << '\n';
            continue;
        }
        if(b>=2*a){
            cout << "0\n";
            continue;
        }
        cout << 2*a-b << '\n';
    }
    return 0;
}
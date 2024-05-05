#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1;i<n-1;i++) cout << i << ' ' << i << '\n';
        cout << n << ' ' << n-1 << '\n' << n << ' ' << n << '\n';
    }
    return 0;
}
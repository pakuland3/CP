#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t,x;
    cin >> t >> x;
    int n;
    cin >> n;
    int d=0;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        int tt;
        while(k--){
            cin >> tt;
            if(tt==x) d++;
        }
    }
    cout << (d==n?"YES":"NO");
    return 0;
}
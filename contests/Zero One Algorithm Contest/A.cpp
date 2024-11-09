#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll res=0;
    ll cur=0;
    int n;
    cin >> n;
    while(n--){
        bool i;
        cin >> i;
        if(i) cur++;
        else cur--;
        res+=cur;
    }
    cout << res;
    return 0;
}
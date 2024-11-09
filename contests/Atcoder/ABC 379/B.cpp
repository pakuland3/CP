#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,k;
    string s;
    cin >> n >> k >> s;
    s+='X';
    int idx=0;
    int res=0;
    for(int i=1;i<=n;i++){
        if(s[i]=='X' && s[i-1]=='O'){
            if(i-idx<k) continue;
            res+=(i-idx)/k;
        }
        if(s[i]=='O' && s[i-1]=='X') idx=i;
    }
    cout << res;
    return 0;
}
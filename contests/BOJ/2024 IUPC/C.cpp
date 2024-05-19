#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    string s;
    cin >> n >> s;
    int q;
    cin >> q;
    while(q--){
        int l,r,ans=0;
        cin >> l >> r;
        l--;
        r--;
        for(int i=0;i<r-l;i++){
            int cnt=min(i+1,r-l+1-(i+1)),tmp=0;
            for(int j=0;j<cnt;j++){
                if(s[l+i-j]==s[l+i+1+j]) tmp++;
            }
            ans=max(ans,tmp);
        }
        cout << ans << '\n';
    }
    return 0;
}
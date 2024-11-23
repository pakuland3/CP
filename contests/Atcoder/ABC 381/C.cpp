#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    string a;
    cin >> a;
    int ans=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!='/') continue;
        ans=max(ans,1);
        for(int j=0;0<=i-(j+1) && i+j+1<n;j++){
            if(a[i-(j+1)]!='1' || a[i+j+1]!='2') break;
            ans=max(ans,2*j+3);
        }
    }
    cout << ans;
    return 0;
}
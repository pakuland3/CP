#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        bool l=0,m=0;
        while(a!=b){
            if(a==c) l=1;
            if(a==d) m=1;
            a++;
            if(a>12) a-=12;
        }
        if(l && m) cout << "NO\n";
        else if(!l && !m) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
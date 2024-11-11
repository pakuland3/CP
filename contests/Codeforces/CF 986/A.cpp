#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        int x=0,y=0;
        string s;
        cin >> s;
        bool yes=0;
        for(int i=0;i<100;i++){
            if(yes) break;
            for(int j=0;j<s.length();j++){
                if(s[j]=='N') y++;
                if(s[j]=='S') y--;
                if(s[j]=='E') x++;
                if(s[j]=='W') x--;
                if(x==a && y==b) yes=1;
            }
        }
        cout << (yes?"YES":"NO") << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        double nn=sqrt((double)n);
        n=sqrt(n);
        if(nn!=n){
            cout << "No\n";
            continue;
        }
        bool no=0;
        for(int j=0;j<n;j++){
            if(!(s[j]-'0') || !(s[n*(n-1)+j]-'0') || !(s[n-1+n*j]-'0') || !(s[j*n]-'0')) no=1;
        }
        for(int i=1;i<n-1;i++) for(int j=1;j<n-1;j++){
            if((s[n*i+j]-'0')) no=1;
        }
        if(no) cout << "No\n";
        else cout << "Yes\n";
    }
    return 0;
}
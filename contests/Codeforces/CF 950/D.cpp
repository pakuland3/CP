#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &s:a) cin >> s;
        vector<int> b(n-1);
        for(int i=0;i<n-1;i++) b[i]=gcd(a[i],a[i+1]);
        int cnt=0;
        bool no=0,c=0,d=0;
        for(int i=1;i<n-1;i++){
            if(b[i]>=b[i-1]) continue;
            bool ck=(i>=3);
            if(ck && b[i-3]<=b[i]){
                if(cnt>0){
                    no=1;
                    break;
                }
                cnt++;
                continue;
            }
        }
    }
    return 0;
}
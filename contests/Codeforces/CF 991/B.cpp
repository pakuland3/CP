#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll tt;
        ll sum[2]={0,};
        for(int i=0;i<n;i++){
            cin >> tt;
            if(i%2) sum[1]+=tt;
            else sum[0]+=tt;
        }
        if(sum[0]%(n-n/2)!=0 || sum[1]%(n/2)!=0) cout << "NO";
        else if(sum[0]/(n-n/2)!=sum[1]/(n/2)) cout << "NO";
        else cout << "YES";
        cout << '\n';
    }
    return 0;
}
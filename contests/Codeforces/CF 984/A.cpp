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
        vector<int> a(n);
        bool f=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(i==0) continue;
            if(abs(a[i]-a[i-1])!=5 && abs(a[i]-a[i-1])!=7) f=1;
        }
        cout << (f?"NO":"YES") << '\n';
    }
    return 0;
}
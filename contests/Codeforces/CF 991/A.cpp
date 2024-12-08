#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> a;
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            a.push_back(s.length());
        }
        int res=0;
        for(int i=0;i<n;i++){
            if(a[i]>m) break;
            m-=a[i];
            res++;
        }
        cout << res << '\n';
    }

    return 0;
}
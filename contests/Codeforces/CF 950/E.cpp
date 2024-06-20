#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> a(n,vector<int> (m)),b(n,vector<int> (m));;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> a[i][j];
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> b[i][j];
        
    }
    return 0;
}
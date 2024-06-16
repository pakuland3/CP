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
        vector<int> a(n-1);
        for(int &s:a) cin >> s;
        int tmp;
        cin >> tmp;
        sort(a.begin(),a.end());
        cout << tmp+a[n-2] << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,f,k;
        cin >> n >> f >> k; f--;
        vector<int> a(n);
        for(int &s:a) cin >> s;
        int val=a[f];
        sort(a.begin(),a.end());
        auto lit=lower_bound(a.begin(),a.end(),val);
        auto rit=upper_bound(a.begin(),a.end(),val)-1;
        int posr=a.end()-rit;
        int posl=a.end()-lit;
        if(posr>k) cout << "NO";
        else{
            if(posl>k) cout << "MAYBE";
            else cout << "YES";
        }
        cout << '\n';
    }
    return 0;
}
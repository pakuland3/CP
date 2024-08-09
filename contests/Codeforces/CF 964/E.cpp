#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<int> p(14);
    for(int i=0;i<14;i++) p[i]=pow(3,i);
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        int ans=2*(upper_bound(p.begin(),p.end(),l)-p.begin());
        int end,cur=upper_bound(p.begin(),p.end(),l+1)-p.begin();
        bool d=0;
        if(p[cur]>r){
            ans+=cur*(r-l);
            d=1;
        }
        else end=upper_bound(p.begin(),p.end(),r)-p.begin();
        if(d){
            cout << ans << '\n';
            continue;
        }
        ans+=cur*(p[cur]-l-1);
        for(int i=cur+1;i<end;i++) ans+=i*(p[i]-p[i-1]);
        ans+=end*(r-p[end-1]+1);
        cout << ans << '\n';
    }
    return 0;
}
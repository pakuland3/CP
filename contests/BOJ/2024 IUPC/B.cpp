#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m,tmp,ans=0;
    cin >> n >> m;
    deque<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end(),greater<int> ());
    while(m-- && a.size()>0){
        if(a[0]>0) ans+=a[0];
        a.pop_front();
        if(a.size()>0) a.pop_back();
    }
    cout << ans;
    return 0;
}
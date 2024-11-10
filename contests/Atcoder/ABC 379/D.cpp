#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int qq;
    cin >> qq;
    // array of height is monotonic, so use queue to access lastest plant
    queue<int> q;
    vector<ll> h(qq+1);
    ll t;
    h[0]=0;
    for(int i=0;i<qq;i++){
        int tt;
        cin >> tt;
        if(tt==1) q.push(i);
        if(tt==2){
            cin >> t;
            h[i]+=t;
        }
        if(tt==3){
            cin >> t;
            int cnt=0;
            while(!q.empty() && h[i]-h[q.front()]>=t){
                q.pop();
                cnt++;
            }
            cout << cnt << '\n';
        }
        h[i+1]=h[i];
    }
    return 0;
}
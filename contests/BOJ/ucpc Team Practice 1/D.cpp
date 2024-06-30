#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct edge{
    ll st,en,ti;    
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m,k,S,T;
    cin >> n >> m >> k >> S >> T;
    vector<edge> E(m);
    vector<vector<ll>> dp(k+1,vector<ll> (n+1,-1));
    for(edge &l:E) cin >> l.st >> l.en >> l.ti;
    sort(E.begin(),E.end(),[](edge &l, edge &r)->bool{
        return l.st<r.st;
    });
    dp[0][S]=0;
    for(int i=0;i<=k;i++){
        for(edge &l:E) if(dp[i][l.st]!=-1) dp[i][l.en]=max(dp[i][l.st]+l.ti,dp[i][l.en]);
        if(i<k) for(edge &l:E) dp[i+1][l.st]=max(dp[i+1][l.st],dp[i][l.en]);
    }
    cout << dp[k][T];
    return 0;
}
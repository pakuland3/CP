#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool wins[100001],vis[100001];
// 0 donggggas 1 uppercut
int a[100001][2];
vector<vector<int>> graph;

void solve(int node, bool turn){
    if(graph[node].size()==1 && node!=1){
        wins[node]=(a[node][0]>a[node][1]?0:1);
        return;
    }
    bool canWin=0;
    for(int i=0;i<graph[node].size();i++){
        int nx=graph[node][i];
        if(vis[nx]) continue;
        a[nx][0]=a[node][0];
        a[nx][1]=a[node][1];
        if(graph[nx].size()!=1){
            a[nx][0]+=turn;
            a[nx][1]+=!turn;
        }
        vis[nx]=1;
        solve(nx,!turn);
        if(wins[nx]==turn) canWin=1;
    }
    if(canWin) wins[node]=turn;
    else wins[node]=!turn;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    graph.resize(n+1);
    for(int i=1;i<n;i++){
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    a[1][0]=1;
    vis[1]=1;
    solve(1,0);
    for(int i=1;i<=n;i++){
        if(graph[i].size()==1) cout << "uppercut\n";
        else cout << (wins[i]?"donggggas":"uppercut") << '\n';
    }
    return 0;
}
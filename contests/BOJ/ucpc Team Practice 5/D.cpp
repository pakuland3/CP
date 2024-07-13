// #include <bits/stdc++.h>
// typedef long long ll;
// typedef long double ld;
// using namespace std;

// int n,root;
// vector<vector<int>> graph;
// vector<bool> vis;
// vector<int> parent;
// ll Dtree=0,Gtree=0;

// void dfs(int p,int node,int d){
//     ll cnt=0;
//     for(int i=0;i<graph[node].size();i++){
//         if(!vis[graph[node][i]]){
//             cnt++;
//             parent[graph[node][i]]=node;
//             vis[graph[node][i]]=1;
//             dfs(node,graph[node][i],d+1);
//         }
//     }
//     if(d>=3){
//         if(d==3){
//             if(graph[root].size()>1) Dtree+=(ll)graph[root].size()-1LL;
//         }
//         else{
//             if(graph[parent[parent[node]]].size()>2) Dtree+=(ll)graph[parent[parent[node]]].size()-1;
//             else Dtree++;
//         }
//     }
//     if(p!=0 && cnt>0) Gtree+=cnt-1LL;
// }

// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(NULL);
//     cin >> n;
//     parent.resize(n+1);
//     vis.resize(n+1,0);
//     graph.resize(n+1,vector<int> ());
//     for(int i=1;i<=n;i++) parent[i]=i;
//     for(int i=1;i<n;i++){
//         int a,b;
//         cin >> a >> b;
//         graph[a].push_back(b);
//         graph[b].push_back(a);
//     }
//     for(int i=1;i<=n;i++){
//         if(graph[i].size()==1) root=i;
//     }
//     vis[root]=1;
//     dfs(0,root,1);
//     cout << Dtree << ' ' << Gtree << '\n';
//     if(Dtree>3*Gtree) cout << 'D';
//     else if(Dtree<3*Gtree) cout << 'G';
//     else cout << "DUDUDUNGA";
//     return 0;
// }

#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

struct edge{
    int u,v;
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    vector<edge> e;
    vector<ll> cnt(n+1,0);
    for(int i=1;i<n;i++){
        int a,b;
        cin >> a >> b;
        cnt[a]++;
        cnt[b]++;
        e.push_back({a,b});
    }
    ll Dtree=0,Gtree=0;
    for(int i=0;i<n-1;i++){
        int a=e[i].u;
        int b=e[i].v;
        Dtree+=(cnt[a]-1)*(cnt[b]-1);
    }
    for(int i=1;i<=n;i++) Gtree+=cnt[i]*(cnt[i]-1)*(cnt[i]-2)/6;
    // cout << Dtree << ' ' << Gtree << '\n';
    if(Dtree>3*Gtree) cout << 'D';
    else if(Dtree<3*Gtree) cout << 'G';
    else cout << "DUDUDUNGA";
    return 0;
}
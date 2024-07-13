#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct info{
    int node,v;
    bool operator<(info &l){
        return v<l.v;
    }
    bool operator>(info &l){
        return v>l.v;
    }
    bool operator==(info &l){
        return v==l.v;
    }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<vector<info>> node(n+1);
    vector<vector<info>> graph(n+1);
    for(int i=1;i<=n;i++){
        int a,b;
        cin >> a >> b;
        node[b].push_back({i,a});
    }
    for(int i=1;i<=n;i++) sort(node[i].begin(),node[i].end());
    int nodes=1;
    for(int i=1;i<=n;i++){
        if(nodes==n) break;
        for(int j=0;j<node[i].size();j++){
            auto it=upper_bound(node[i+1].begin(),node[i+1].end(),node[i][j]);
            
        }
    }
    return 0;
}
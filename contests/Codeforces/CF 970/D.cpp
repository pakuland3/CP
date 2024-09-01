#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int parent[200001];
int cnt[200001];

int getParent(int a){
    if(parent[a]==a) return a;
    return parent[a]=getParent(parent[a]);
}

void unionParent(int a, int b){
    a=getParent(a);
    b=getParent(b);
    if(a==b) return;
    if(a>b){
        parent[a]=b;
        cnt[b]+=cnt[a];
    }
    else{
        parent[b]=a;
        cnt[a]+=cnt[b];
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        memset(cnt,0,sizeof(cnt));
        for(int i=1;i<=n;i++) parent[i]=i;
        int p[200001];
        for(int i=1;i<=n;i++) cin >> p[i];
        cin >> s;
        for(int i=1;i<=n;i++) if(!(s[i-1]-'0')) cnt[i]=1;
        for(int i=1;i<=n;i++) unionParent(i,p[i]);
        for(int i=1;i<=n;i++) cout << cnt[getParent(i)] << ' ';
        cout << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
#define SIZE 200001
typedef long long ll;
using namespace std;

int tree[4*SIZE];

void update(int X, int V, int node, int S, int E){
    if(E<X || X<S) return;
    if(S==E){
        tree[node]=V;
        return;
    }
    int MID=(S+E)/2;
    update(X,V,2*node,S,MID);
    update(X,V,2*node+1,MID+1,E);
    tree[node]=gcd(tree[2*node],tree[2*node+1]);
}

int query(int L, int R, int node, int S, int E){
    if(R<S || E<L) return 0;
    if(L<=S && E<=R) return tree[node];
    int MID=(S+E)/2;
    return gcd(query(L,R,2*node,S,MID),query(L,R,2*node+1,MID+1,E));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        vector<int> a(n);
        for(int &t:a) cin >> t;
        for(int i=1;i<n;i++) update(i,abs(a[i]-a[i-1]),1,1,n-1);
        while(q--){
            int l,r;
            cin >> l >> r;
            cout << (l==r?0:query(l,r-1,1,1,n-1)) << ' ';
        }
        cout << '\n';
    }
    return 0;
}
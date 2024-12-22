#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll a,b,c;
    cin >> a >> b >> c;
    vector<int> graph[11];
    if(a==0){
        if(c%b==0 && 0<c/b && c/b<11) for(int i=1;i<11;i++) graph[i].push_back(c/b);
    }
    else if(b==0){
        if(c%a==0 && 0<c/a && c/a<11) for(int i=1;i<11;i++) graph[c/a].push_back(i);
    }
    else{
        for(ll i=1;i<11;i++){
            ll by=c-i*a;
            if(by%b==0 && 0<by/b && by/b<11) graph[i].push_back(by/b);
        }
    }
    for(int i=1;i<11;i++){
        if(graph[i].empty()) cout << 0;
        else for(int j=0;j<graph[i].size();j++) cout << graph[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
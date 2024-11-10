#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    int n,m;
    string s;
    cin >> n >> m >> s;
    for(int i=0;i<n;i++) pq.push({s[i]-'a',i});
    while(m--){
        s[pq.top().second]='-';
        pq.pop();
    }
    for(int i=0;i<n;i++) if(s[i]!='-') cout << s[i];
    return 0;
}
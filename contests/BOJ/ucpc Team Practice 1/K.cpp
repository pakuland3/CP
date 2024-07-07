#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool solve(int cnt){

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,t;
    cin >> n >> t;
    vector<int> a(n);
    for(int &s:a) cin >> s;
    
    return 0;
}

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct compare{
    bool operator()(pair<int, int> &l, pair<int, int> &r){
        return l.second>r.second;
    }
};


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,t;
    cin >> n >> t;
    vector<int> a(n);
    for(int &k:a) cin >> k;
    int ans=1;
    sort(a.begin(),a.end());
    priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
    if(a[0]<t) pq.push({1,t});
    else pq.push({a[0]-t+1,a[0]});
    for(int i=1;i<n;i++){
        pair<int,int> s=pq.top();
        if(a[i]-t+1<s.second){
            ans++;
            if(a[i]<t) pq.push({1,t});
            else pq.push({a[i]-t+1,a[i]});
        }
        else{
            pq.pop();
            pq.push({a[i]-t+1,a[i]});
        }
    }
    cout << ans;
    return 0;
}
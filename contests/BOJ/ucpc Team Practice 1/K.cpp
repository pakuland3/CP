#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n;
ll t;
vector<ll> a;

bool solve(int cnt){
    vector<ll> s(cnt);
    for(int i=0;i<n;i++){
        if(i+1>cnt){
            int f=((i+1)%cnt==0?cnt-1:(i+1)%cnt-1);
            ll time=max(max(a[i]-t+1,1LL),s[f]+t);
            if(a[i]<time) return 0;
            s[f]=time;
        }
        else s[i]=max(a[i]-t+1,1LL);
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> t;
    a.resize(n);
    for(ll &s:a) cin >> s;
    sort(a.begin(),a.end());
    int s=1,e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(solve(mid)) e=mid-1;
        else s=mid+1;
    }
    cout << s;
    return 0;
}

// wrong answer using greedy
// #include <bits/stdc++.h>
// typedef long long ll;
// using namespace std;

// struct compare{
//     bool operator()(pair<int, int> &l, pair<int, int> &r){
//         return l.second>r.second;
//     }
// };


// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//     int n,t;
//     cin >> n >> t;
//     vector<int> a(n);
//     for(int &k:a) cin >> k;
//     int ans=1;
//     sort(a.begin(),a.end());
//     priority_queue<pair<int,int>,vector<pair<int,int>>,compare> pq;
//     if(a[0]<t) pq.push({1,t});
//     else pq.push({a[0]-t+1,a[0]});
//     for(int i=1;i<n;i++){
//         pair<int,int> s=pq.top();
//         if(a[i]-t+1<s.second+1){
//             ans++;
//             if(a[i]<t) pq.push({1,t});
//             else pq.push({a[i]-t+1,a[i]});
//         }
//         else{
//             pq.pop();
//             pq.push({a[i]-t+1,a[i]});
//         }
//     }
//     cout << ans;
//     return 0;
// }
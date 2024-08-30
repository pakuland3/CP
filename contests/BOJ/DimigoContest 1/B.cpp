#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

pair<int,int> pp[100000];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m,v,p,s,c=0,a=1;
    cin >> n >> m;
    cin >> v >> p >> s;
    c=v+p+s;
    for(int i=0;i<n;i++){
        cin >> v >> p >> s;
        pp[i]={v+p+s,i};
    }
    sort(pp,pp+n,[](pair<int,int> &l, pair<int,int> &r) -> bool { return l.first>r.first; });
    cout << "0 ";
    for(int i=0;i<n && a<m;i++) if(pp[i].first<=c){
        cout << pp[i].second+1 << ' ';
        a++;
    }
    return 0;
}
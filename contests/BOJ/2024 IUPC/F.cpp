#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct Point{
    ll x;
    ll y;
};

int n,ans=0;

vector<Point> cur(4),poi;

ll getCCW(Point &a, Point &b, Point &c){
    if(a.x*b.y+b.x*c.y+c.x*a.y-(b.x*a.y+c.x*b.y+a.x*c.y)>0) return 1;
    else return 0;
}

void solve(int ind, int cnt){
    if(cnt==4){
        vector<Point> tmp(4); for(int i=0;i<4;i++) tmp[i]=cur[i];
        sort(tmp.begin(),tmp.end(),[](Point &l, Point &r)->bool{
            if(l.y==r.y) return l.x<r.x;
            return l.y<r.y;
        });
        Point horizon,f=tmp[0];
        horizon.x=1000000;
        horizon.y=0;
        sort(tmp.begin()+1,tmp.end(),[&f,&horizon](Point &l, Point &r)->bool{
            return getCCW(f,horizon,l)<getCCW(f,horizon,r);
        });
        ll k=getCCW(tmp[0],tmp[1],tmp[2]),l=getCCW(tmp[2],tmp[3],tmp[0]);
        if(k>0 && l>0) ans++;
        else if(k<0 && l<0) ans++;
        return;
    }
    for(int i=ind+1;i<n;i++){
        cur[cnt]=poi[i];
        solve(i,cnt+1);
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    poi.resize(n);
    for(Point &t:poi) cin >> t.x >> t.y;
    solve(-1,0);
    cout << ans;
    return 0;
}

// well known algorithm on https://usaco.org/current/data/sol_triangles_platinum_dec16.html
// 대 사 코
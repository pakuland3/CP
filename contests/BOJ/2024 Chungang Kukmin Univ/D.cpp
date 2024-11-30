#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct p{
    double x,y;
};

double d(p a, p b){ return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)); }

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    double r;
    cin >> r;
    int ans=0;
    p p1,p2,p3,p4,c;
    double d1,d2,d3;
    for(int i=0;i<n;i++){
        cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y >> p4.x >> p4.y;
        d1=d(p1,p2)/2;
        d2=d(p1,p4)/2;
        d3=d(p1,p3)/2;
        c={(p1.x+p2.x+p3.x+p4.x)/4,(p1.y+p2.y+p3.y+p4.y)/4};
        if(r+max(d1,max(d2,d3))>=d(c,{0,0})) ans++;
    }
    cout << ans;
    return 0;
}
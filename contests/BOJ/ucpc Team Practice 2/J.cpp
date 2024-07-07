#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

struct Poi{
    double x,y;
};

double getDis(Poi a, Poi b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    vector<Poi> a(n);
    for(Poi &t:a) cin >> t.x >> t.y;
    double dis=1e9;
    Poi ans;
    for(int i=0;i<n;i++){
        double f=-1,s=-1;
        for(int j=0;j<n;j++){
            double tmp=getDis(a[i],a[j]);
            if(f==s && f==-1){
                f=s=tmp;
            }
            f=max(f,tmp);
            s=min(s,tmp);
        }
        if(f+s<dis){
            dis=f+s;
            ans=a[i];
        }
    }
    cout << ans.x << ' ' << ans.y;
    return 0;
}
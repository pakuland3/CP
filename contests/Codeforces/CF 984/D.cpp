#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
struct p{
    int x,y;
};
 
char mapp[1000][1000];
 
bool g(p a, int b){
    return mapp[a.x][a.y]-'0'==b;
}
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int hl=0,hr=m-1;
        int vt=0,vb=n-1;
        int res=0;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> mapp[i][j];
        while(hl<hr && vt<vb){
            for(int i=hl;i<hr;i++){
                p a={vt,i},b,c,d;
                
                b={vt,i+1};
 
                if(i<hr-1) c={vt,i+2};
                else c={vt+1,hr};
 
                if(i<hr-2) d={vt,i+3};
                else d={vt+1+(hr-1<=i),hr};
                
                if(d.x>vb) d={vb,hr-1};
 
                if(g(a,1) && g(b,5) && g(c,4) && g(d,3)) res++;
            }
            for(int i=vt;i<vb;i++){
                p a={i,hr},b,c,d;
                
                b={i+1,hr};
                
                if(i<vb-1) c={i+2,hr};
                else c={vb,hr-1};
 
                if(i<vb-2) d={i+3,hr};
                else d={vb,hr-1-(i>=vb-1)};
                
                if(d.y<hl) d={vb-1,hl};
 
                if(g(a,1) && g(b,5) && g(c,4) && g(d,3)) res++;
            }
            for(int i=hr;i>hl;i--){
                p a={vb,i},b,c,d;
 
                b={vb,i-1};
 
                if(i>hl+1) c={vb,i-2};
                else c={vb-1,hl};
 
                if(i>hl+2) d={vb,i-3};
                else d={vb-1-(hl+1>=i),hl};
                
                if(d.x<vt) d={vt,hl+1};
                
                if(g(a,1) && g(b,5) && g(c,4) && g(d,3)) res++;
            }
            for(int i=vb;i>vt;i--){
                p a={i,hl},b,c,d;
                
                b={i-1,hl};
                
                if(i>vt+1) c={i-2,hl};
                else c={vt,hl+1};
                
                if(i>vt+2) d={i-3,hl};
                else d={vt,hl+1+(i<=vt+1)};
                
                if(d.y>hr) d={vt+1,hr};

                if(g(a,1) && g(b,5) && g(c,4) && g(d,3)) res++;
            }
            hl++; hr--;
            vt++; vb--;
        }
        cout << res << '\n';
    }
    return 0;
}
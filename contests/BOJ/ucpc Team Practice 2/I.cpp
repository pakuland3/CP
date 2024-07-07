#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int n,ans=0;
bool vis[50][50]={0,};
int edx[]={0,1,0},edy[]={-1,0,1};
int odx[]={0,-1,0},ody[]={1,0,-1};

void solve(int x,int y,int cnt,int e){
    if((x+y)%2){
        for(int i=0;i<3;i++){
            if(i==e) continue;
            int nx=x+odx[i];
            int ny=y+ody[i];
            if(!vis[nx][ny] && cnt<n-1){
                vis[nx][ny]=1;
                solve(nx,ny,cnt+1,i);
                vis[nx][ny]=0;
            }
            else if(vis[nx][ny] && cnt==n-1) ans++;
        }
    }
    else{
        for(int i=0;i<3;i++){
            if(i==e) continue;
            int nx=x+edx[i];
            int ny=y+edy[i];
            if(!vis[nx][ny] && cnt<n-1){
                vis[nx][ny]=1;
                solve(nx,ny,cnt+1,i);
                vis[nx][ny]=0;
            }
            else if(vis[nx][ny] && cnt==n-1) ans++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n;
    vis[23][23]=1;
    vis[24][23]=1;
    solve(24,23,0,1);
    cout << ans;
    return 0;
}
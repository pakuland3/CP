#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct Poi{
    int x,y;
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m,ls;
    cin >> n >> m >> ls;
    vector<Poi> start;
    char graph[51][51];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> graph[i][j];
    string s;
    cin >> s;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) if(graph[i][j]==s[0]) start.push_back({i,j});
    int dx[]={1,-1,0,0};
    int dy[]={0,0,1,-1};
    bool p[51][51]={0,};
    vector<Poi> ans_poi;
    for(int i=0;i<start.size();i++){
        bool vis[51][51]={0,};
        queue<Poi> q;
        q.push({start[i].x,start[i].y});
        vector<Poi> path;
        bool made[1001]={0,};
        vis[start[i].x][start[i].y]=1;
        made[0]=1;
        int cnt=1;
        path.push_back({start[i].x,start[i].y});
        while(!q.empty() && cnt<ls){
            Poi now=q.front();
            q.pop();
            for(int j=0;j<4;j++){
                int nx=now.x+dx[j];
                int ny=now.y+dy[j];
                if(n<=nx || nx<0 || m<=ny || ny<0) continue;
                if(vis[nx][ny]) continue;
                for(int k=1;k<ls;k++){
                    if(!made[k] && graph[nx][ny]==s[k]){
                        path.push_back({nx,ny});
                        cnt++;
                        made[k]=1;
                        break;
                    }
                }
                q.push({nx,ny});
                vis[nx][ny]=1;
            }
            if(cnt==ls){
                for(int j=0;j<path.size();j++){
                    ans_poi.push_back({path[j].x,path[j].y});
                    p[path[j].x][path[j].y]=1;
                }
            }
        }
    }
    int curx=0,cury=0;
    vector<char> ans;
    for(int i=0;i<ans_poi.size();i++){
        int desx=ans_poi[i].x;
        int desy=ans_poi[i].y;
        while(curx!=desx && cury!=desy){
            if(curx<desx) ans.push_back('D');
            if(curx<desy) ans.push_back('R');
            if(curx>desx) ans.push_back('U');
            if(cury>desy) ans.push_back('L');
        }
        ans.push_back('P');
    }
    cout << ans_poi.size()/ls << ' ' << ans.size() << '\n';
    for(char &out:ans) cout << out;
    return 0;
}
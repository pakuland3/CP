#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> l,r;
    vector<bool> whos(n);
    vector<int> heights(n);
    for(int i=0;i<n;i++){
        int h;
        char c;
        cin >> h >> c;
        if(c=='L'){
            l.push_back(h);
            whos[i]=0;
        }
        else{
            r.push_back(h);
            whos[i]=1;
        }
    }
    sort(l.begin(),l.end());
    sort(r.begin(),r.end(),greater<int>());
    int li=0,ri=0;
    for(int i=0;i<n;i++){
        if(whos[i]) heights[i]=r[ri++];
        else heights[i]=l[li++];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(whos[i]){
            bool p=1;
            for(int j=n-1;j>i;j++){
                if(heights[j]>heights[i]){
                    p=0;
                    break;
                }
            }
            if(p) ans++;
        }
        else{
            bool p=1;
            for(int j=0;j<i;j++){
                if(heights[j]>heights[i]){
                    p=0;
                    break;
                }
            }
            if(p) ans++;
        }
    }
    cout << ans;
    return 0;
}
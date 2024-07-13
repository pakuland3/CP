#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// struct info{
//     int start,end,length;
// };

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool remain=0;
        int ans=0,rind=0;
        string s;
        cin >> s;
        int li=0;
        for(int i=0;i<n;i++){
            if(s[i]=='T'){
                if(remain) ans+=i-li;
                else li=i;
                remain=!remain;
            }
        }
        // vector<info> l;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='T'){
        //         ei++;
        //         if(i==n-1){
        //             l.push_back({si,i,ei-si});
        //         }
        //     }
        //     else{
        //         if(ei>si) l.push_back({si,i-1,ei-si});
        //         ei=si=i+1;
        //     }
        // }
        // for(int i=0;i<l.size();i++){
        //     if(remain){
        //         if(l[i].length%2==1){
        //             ans+=l[i].length/2+l[i].start-rind;
        //             remain=0;
        //         }
        //         else{
        //             ans+=l[i].start-rind-1+(l[i].length)/2;
        //             rind=l[i].end;
        //         }
        //     }
        //     else{
        //         if(l[i].length%2==1){
        //             remain=1;
        //             rind=l[i].end;
        //         }
        //         else ans+=l[i].length/2;
        //     }
        // }
        if(remain) cout << "-1\n";
        else cout << ans << '\n';
    }
    return 0;
}
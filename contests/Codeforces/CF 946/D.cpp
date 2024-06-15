#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> c(4,0);
        for(int i=0;i<n;i++){
            if(s[i]=='N') c[0]++;
            if(s[i]=='S') c[1]++;
            if(s[i]=='E') c[2]++;
            if(s[i]=='W') c[3]++;
        }
        if(abs(c[0]-c[1])%2==0 && abs(c[2]-c[3])%2==0){
            if(c[0]==c[1] && c[0]==1){
                if(c[2]<1){cout << "NO\n"; continue;}
                int hdx=0,hdy=0,rdx=0,rdy=0;
                for(int i=0;i<n;i++){
                    if(s[i]=='N'){
                        if(hdy>rdy){rdy++; cout << "R";}
                        else{hdy++;cout << "H";}
                    }
                    if(s[i]=='S'){
                        if(hdy>rdy){hdy--; cout << "H";}
                        else{rdy--; cout << "R";}
                    }
                    if(s[i]=='E'){
                        if(hdx>rdx){hdx--; cout << "H";}
                        else{rdx--; cout << "R";}
                    }
                    if(s[i]=='W'){
                        if(hdx>rdx){rdx++; cout << "R";}
                        else{hdx++; cout << "H";}
                    }
                }
            }
            cout << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}
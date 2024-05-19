#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    int bx,rx,des;
    for(int i=0;i<s.length();i++){
        if(s[i]=='@') rx=i;
        if(s[i]=='#') bx=i;
        if(s[i]=='!') des=i;
    }
    if(des<bx && bx<rx){
        cout << rx-1-des;
        return 0;
    }
    if(rx<bx && bx<des){
        cout << des-1-rx;
        return 0;
    }
    cout << -1;
    return 0;
}
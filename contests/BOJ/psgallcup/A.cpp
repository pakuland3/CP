#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    string a;
    cin >> a;
    bool b=0,c=0;
    for(int i=1;i<n;i++){
        if(b && (a[i]=='4' || a[i]=='5')) c=1;
        else c=0;
        if(b && c){
            a[i]='S';
            a[i-1]='P';
            a[i-2]='a';
        }
        if(a[i]=='S' && a[i-1]=='P') b=1;
        else b=0;
    }
    for(int i=0;i<n;i++) if(a[i]!='a') cout << a[i];
    return 0;
}
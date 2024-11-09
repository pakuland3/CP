#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string a;
    cin >> a;
    if(a.length()==1){
        cout << "No Money";
        return 0;
    }
    int idx=0;
    string b(""),c("");
    while(idx!=a.length() && a[idx]!='+') b+=a[idx++];
    idx++;
    while(idx<a.length()) c+=a[idx++];
    if(b[0]=='0' || c[0]=='0' || b.length()!=c.length()) cout << "No Money";
    else{
        for(int i=0;i<b.length();i++) if(b[i]!=c[i] || '9'<b[i]){
            cout << "No Money";
            return 0;
        }
        cout << "CUTE";
    }
    return 0;
}
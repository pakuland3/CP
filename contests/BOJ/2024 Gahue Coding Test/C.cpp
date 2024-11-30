#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int q;
    cin >> q;
    while(q--){
        int a,b;
        cin >> a >> b;
        int aa,bb;
        if(a<b){
            aa=b-a;
            bb=a-201+1+243-b;
        }
        else{
            aa=243-a+1+b-201;
            bb=a-b;
        }
        if(aa==bb) cout << "Same";
        else if(aa>bb) cout << "Outer circle line";
        else cout << "Inner circle line";
        cout << '\n';
    }
    return 0;
}
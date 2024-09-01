#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        b=b%2;
        if(b>0){
            if(a>0){
                if(a%2==0) cout << "YES";
                else cout << "NO";
            }
            else cout << "NO";
        }
        else{
            if(a%2) cout << "NO";
            else cout << "YES";
        }
        cout << '\n';

    }
    return 0;
}
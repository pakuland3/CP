#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int p1,p2,p3;
        cin >> p1 >> p2 >> p3;
        if((p1+p2+p3)%2!=0){cout << "-1\n"; continue;}
        if(p1+p2<p3){cout << p1+p2 << '\n'; continue;}
        int ans=(p1+p2-p3)/2;
        p1-=ans; p2-=ans;
        cout << ans+p1+p2 << '\n'; 
    }
    return 0;
}
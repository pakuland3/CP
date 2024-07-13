#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    double h,w;
    cin >> h >> w;
    if(h>w) cout << w*50;
    else cout << h*50;
    return 0;
}
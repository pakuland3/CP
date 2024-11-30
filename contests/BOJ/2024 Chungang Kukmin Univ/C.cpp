#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    if(n==2 && k==1){
        cout << "1 2";
        return 0;
    }
    if(n!=1) cout << -1;
    else for(int i=0;i<n*k;i++) cout << "1 ";
    return 0;
}
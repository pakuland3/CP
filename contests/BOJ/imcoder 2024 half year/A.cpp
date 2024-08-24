#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,h;
    cin >> n >> h;
    int a[1000001];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        h-=a[i];
        if(h<1){
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
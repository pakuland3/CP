#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    int res=!(a%2)+b%2;
    a+=!(a%2);
    b-=b%2;
    cout << res+(b>a?(b-a+1)/2:0);
    return 0;
}
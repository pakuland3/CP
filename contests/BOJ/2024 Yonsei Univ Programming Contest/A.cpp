#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    if(n>100000 || n%2024!=0) cout << "No";
    else cout << "Yes";
    return 0;
}
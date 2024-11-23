#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    string a;
    cin >> a;
    if(n%2!=1){
        cout << "No";
        return 0;
    }
    for(int i=0;i<(n+1)/2-1;i++) if(a[i]!='1'){
        cout << "No";
        return 0;
    }
    if(a[(n+1)/2-1]!='/'){
        cout << "No";
        return 0;
    }
    for(int i=(n+1)/2;i<n;i++) if(a[i]!='2'){
        cout << "No";
        return 0;
    }
    cout << "Yes";
    return 0;
}
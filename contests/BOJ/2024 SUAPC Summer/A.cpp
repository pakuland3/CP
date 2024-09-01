#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        if(s[i]=='P') a.push_back(i);
        if(s[i]=='C') b.push_back(i);
    }
    for(int i=0;i<min(a.size(),b.size());i++) swap(s[a[i]],s[b[i]]);
    cout << s;
    return 0;
}
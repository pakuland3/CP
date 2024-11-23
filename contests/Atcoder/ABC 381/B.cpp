#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string a;
    cin >> a;
    int cnt[26]={0,};
    for(int i=1;i<=a.length()/2;i++) if(a[2*i-1]!=a[2*i-2]){
        cout << "No";
        return 0;
    }
    for(int i=0;i<a.length();i++) cnt[a[i]-'a']++;
    for(int i=0;i<26;i++) if(cnt[i]>2 || cnt[i]%2!=0){
        cout << "No";
        return 0;
    }
    cout << "Yes";
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        for(int i=0;i<a.length();i++){
            int idx=i;
            for(int j=1;j<9 && i+j<a.length();j++){
                if(a[idx]-(idx-i)<a[i+j]-j) idx=i+j;
            }
            if(idx!=i) a[idx]-=(idx-i);
            for(int j=idx;j>i;j--){
                swap(a[j],a[j-1]);
            }
        }
        cout << a << '\n';
    }
    return 0;
}
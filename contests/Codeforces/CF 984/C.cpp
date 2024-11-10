#include <bits/stdc++.h>
#define SIZE 200000
typedef long long ll;
using namespace std;

bool tree[SIZE];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int cnt=0;
        memset(tree,0,sizeof(tree));
        for(int i=0;i<a.length()-3;i++){
            if(a[i]=='1' && a[i+1]=='1' && a[i+2]=='0' && a[i+3]=='0'){
                tree[i]=1;
                cnt++;
            }
        }
        int q;
        cin >> q;
        while(q--){
            int i,v;
            cin >> i >> v;
            i--;
            a[i]=v+'0';
            if(a.length()<4){
                cout << "NO\n";
                continue;
            }
            for(int j=0;j<4;j++){
                if(j>i) break;
                if(a[i-j]=='1' && a[i-j+1]=='1' && a[i-j+2]=='0' && a[i-j+3]=='0'){
                    if(!tree[i-j]) cnt++;
                    tree[i-j]=1;
                }
                else if(tree[i-j]){
                    cnt--;
                    tree[i-j]=0;
                }
            }
            cout << (cnt>0?"YES":"NO") << '\n';
        }
    }
    return 0;
}
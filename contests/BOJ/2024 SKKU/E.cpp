#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool a[300000],b[300000];
int n;
int c[300000],d[300000];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=!a[i];
    }
    int res=1;
    c[0]=1;
    d[0]=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            c[i]=c[i-1]+1;
            d[i]=d[i-1]+1;
        }
        else{
            c[i]=d[i-1]+1;
            d[i]=1;
        }
        res=max(res,max(d[i],c[i]));
    }
    cout << res;
    return 0;
}
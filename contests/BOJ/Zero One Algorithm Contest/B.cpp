#include <bits/stdc++.h>
#define SIZE 5000001
typedef long long ll;
using namespace std;

bool sieve[SIZE];
ll ps[SIZE];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    int cnt=sqrt(n);
    for(int i=2;i<=cnt;i++){
        if(sieve[i]) continue;
        for(int j=i*i;j<=n;j+=i) sieve[j]=1;
    }
    ps[1]=1;
    for(int i=2;i<=n;i++){
        ps[i]=ps[i-1];
        if(!sieve[i]) ps[i]++;
    }
    while(m--){
        int a,b;
        cin >> a >> b;
        cout << ps[b]-ps[a-1] << '\n';
    }
    return 0;
}
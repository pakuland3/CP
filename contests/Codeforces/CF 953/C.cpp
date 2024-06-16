#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        if(k%2!=0){cout << "No\n"; continue;}
        if(n%2==0 && k>n*n/2){cout << "No\n"; continue;}
        if(n%2==1 && k>(n*n-1)/2){cout << "No\n"; continue;}
        vector<int> a(n); for(int i=0;i<n;i++) a[i]=i+1;
        vector<int> b(n/2); b[0]=0; for(int i=0;i<n/2;i++){
            if(n%2==0) b[i]=4*i+2;
            else b[i]=4*i+4;
        }
        while(k>0){
            auto it=upper_bound(b.begin(),b.end(),k)-1;
            k-=*it;
            int d=it-b.begin()+1;
            int s1=n/2-d,s2;
            if(n%2==0) s2=n/2-1+d;
            else s2=n/2+d;
            swap(a[s1],a[s2]);
        }
        int res=0;
        for(int i=0;i<n;i++) res+=abs(a[i]-(i+1));
        cout << res << '\n';
        // cout << "Yes\n";
        // for(int &s:a) cout << s << ' ';
        // cout << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        bool k=1;
        cin >> n;
        vector<int> a(n);
        cin >> a[0];
        for(int i=1;i<n;i++){cin >> a[i]; if(a[i]!=a[i-1]) k=0;}
        int l=1,r=n;
        if(k){cout << "1\n"; continue;}
        while(l<=r){
            int mid=(l+r)/2;
            bool b=1;
            vector<int> cnt(20,0);
            bitset<20> tmp;
            for(int i=0;i<mid;i++){
                bitset<20> bs(a[i]);
                for(int j=0;j<20;j++) if(bs[j]){cnt[j]++; tmp[j]=1;}
            }
            int prev=tmp.to_ulong();
            for(int i=1;i<n-mid+1;i++){
                bitset<20> bs(a[mid+i-1]);
                for(int j=0;j<20;j++) if(bs[j]) cnt[j]++;
                bitset<20> bbs(a[i-1]);
                for(int j=0;j<20;j++) if(bbs[j]) cnt[j]--;
                bs.reset();
                for(int j=0;j<20;j++) if(cnt[j]>0) bs[j]=1;
                if(prev!=bs.to_ulong()){b=0; break;}
            }
            if(b) r=mid-1;
            else l=mid+1;
        }
        cout << l << '\n';
    }
    return 0;
}
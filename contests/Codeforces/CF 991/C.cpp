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
        int sum=0;
        int cnt2=0;
        int cnt3=0;
        for(int i=0;i<a.length();i++){
            sum+=a[i]-'0';
            cnt2+=a[i]=='2';
            cnt3+=a[i]=='3';
        }
        if(sum%9==0) cout << "YES";
        else{
            bool f=0;
            int c2=min(10,cnt2),c3=min(10,cnt3);
            for(int i=0;i<=c2 && !f;i++){
                for(int j=0;j<=c3 && !f;j++){
                    if((sum+2*i+6*j)%9==0){
                        cout << "YES";
                        f=1;
                        break;
                    }
                }
            }
            if(!f) cout << "NO";
        }
        cout << '\n';
    }
    return 0;
}
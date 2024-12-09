#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string a,b,c;
        cin >> a >> b >> c;
        int la=a.length(),lb=b.length(),cnt=c.length();
        vector<vector<int>> dp(la+1,vector<int> (lb+1,cnt+1));
        dp[0][0]=0;
        for(int i=0;i<=la;i++){
            for(int j=0;j<=lb;j++){
                if(i && a[i-1]==c[i+j-1]) dp[i][j]=dp[i-1][j];
                if(j && b[j-1]==c[i+j-1]) dp[i][j]=min(dp[i][j],dp[i][j-1]);
                if(i) dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
                if(j) dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
            }
        }
        cout << dp[la][lb] << '\n';
    }
    return 0;
}
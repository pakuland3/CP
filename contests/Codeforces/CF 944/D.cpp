#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        deque<pair<int, int>> dq;
        int sp=0;
        cin >> s;
        for(int i=0;i<s.length();i++){
            if(i!=0){
                if(s[i]=='1' && s[i-1]=='0'){
                    sp=i;
                    if(i==s.length()-1) dq.push_back({sp,i});
                }
                else if(s[i]=='0' && s[i-1]=='1') dq.push_back({sp,i-1});
                else if(i==s.length()-1 && s[i]=='1') dq.push_back({sp,i});
            }
        }
        if(dq.size()==0){cout << "1\n"; continue;}
        else if(dq.size()==1 && dq.front().second==s.length()-1){dq.pop_front(); cout << "1\n"; continue;}
        else if(dq.size()==1 && dq.front().first==0){dq.pop_front(); cout << "2\n"; continue;}

        if(dq.front().first>0 && dq.back().second==s.length()-1) cout << 2+(dq.size()-2)*2+1;
        else if(dq.front().first>0 && dq.back().second<s.length()-1) cout << 1+(dq.size()-1)*2+1;
        else if(dq.front().first==0 && dq.back().second<s.length()-1) cout << 2+(dq.size()-2)*2+1;
        else if(dq.size()>2) cout << 4+(dq.size()-3)*2;
        else cout << 2;
        cout << '\n';
    }
    return 0;
}
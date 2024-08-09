#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a=333,b=666;
        while(a!=b){
            cout << "? " << a << ' ' << b << endl;
            int c;
            cin >> c;
            if(c==(a+1)*(b+1)){
                b=a;
                a=2;
            }
            else if(c==a*(b+1)) a=(a+b)/3;
            else{
                a=b;
                b=999;
            }
        }
        cout << "! " << a << endl; 
    }
    return 0;
}
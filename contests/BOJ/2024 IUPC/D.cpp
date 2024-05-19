#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,q;
    cin >> n;
    vector<int> a(n);
    vector<int> sizes;
    vector<int> ind;
    cin >> a[0]; sizes.push_back(a[0]); ind.push_back(0);
        for(int i=1;i<n;i++){
        cin >> a[i]; a[i]+=i;
        if(a[i]>sizes.back()){
            sizes.push_back(a[i]);
            ind.push_back(i);
        }
    }
    cin >> q;
    while(q--){
        int cs;
        cin >> cs;
        cout << ind[lower_bound(sizes.begin(),sizes.end(),cs)-sizes.begin()]+1 << ' ';
    }
    return 0;
}
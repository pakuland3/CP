#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int s,f,ma,mb;
    cin >> s >> ma >> f >> mb;
    cout << (s<=ma+f+mb || s<241?"high speed rail":"flight");
    return 0;
}
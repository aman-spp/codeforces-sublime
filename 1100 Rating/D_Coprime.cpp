#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
void solve(){
    int n; cin>>n;
    string str; cin>>str;
    int cnt = 0;
    for(auto x : str) if(x == 'A') cnt++;
    if(cnt >= n - cnt){
        cout<<"YES"<<endl;
        return;
    }
    else {
        cout<<"NO"<<endl;
        return;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test=1;
    //cin>>test;
    while(test--){
        solve();
    }
    return 0;
}

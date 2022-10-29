#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
void solve(){
    int n,m; cin>>n>>m;
    int mini = min(n,m);
    cout<<mini+1<<endl;
    for(int i=0;i<=mini;i++){
        cout<<i<<" "<<mini-i<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("H:/Codeforces/input.txt", "r", stdin);
    freopen("H:/Codeforces/ouput.txt", "w", stdout);
#endif
    ll test=1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}

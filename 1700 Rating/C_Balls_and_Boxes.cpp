#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
void solve(){
    ll n,idx; cin>>n>>idx; idx--;
     ll mini = INT_MAX;
    vector<ll>nums(n);
    for(ll i=0;i<n;i++){
        cin>>nums[i];
        mini = min(mini,nums[i]);
    }
    vector<ll> ans(n);
    for(ll i=0;i<n;i++){
        nums[i] -= mini;
        ans[i] = nums[i];
    }
    ll rem = 0;
    while(nums[idx] != 0){
        ans[idx]--;
        rem++;
        idx = ((idx-1)%n + n)%n;
    }

    ans[idx] = (n*mini + rem);
    for(auto x : ans) cout<<x<<" ";
    cout<<endl;  
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("H:/Codeforces/input.txt", "r", stdin);
    freopen("H:/Codeforces/ouput.txt", "w", stdout);
#endif
    ll test=1;
    //cin>>test;
    while(test--){
        solve();
    }
    return 0;
}

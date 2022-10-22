// E. Scuza
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
void solve(){
    ll n,q; cin>>n>>q;
    vector<ll> nums(n);
    vector<ll> maxx(n);
    for(ll i=0;i<n;i++) cin>>nums[i];
    vector<ll> prefix = nums;
    ll maxi = nums[0];
    maxx[0] = maxi;
    for(int i=1;i<n;i++){
        maxi = max(maxi,nums[i]);
        maxx[i] = maxi;
    }
    for(ll i=1;i<n;i++) prefix[i] += prefix[i-1];
    for(ll i=0;i<q;i++){
        ll k; cin>>k;
        ll idx = upper_bound(maxx.begin(),maxx.end(),k) - maxx.begin();
        if(idx != 0) cout<<prefix[idx-1]<<" ";
        else cout<<0<<" ";
    }
    cout<<endl;

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("H:/Codeforces/input.txt", "r", stdin);
    freopen("H:/Codeforces/ouput.txt", "w", stdout);
#endif
    ll test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}

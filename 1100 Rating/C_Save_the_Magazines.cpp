// C. Save the Magazines
// Monocarp has been collecting rare magazines for quite a while, and now he has decided to sell them. 
// He distributed the magazines between n boxes, arranged in a row. The i-th box contains ai magazines. 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
void solve(){
    ll n; cin>>n;
    string str; cin>>str;
    vector<ll> nums(n+1,0);
    for(ll i=0;i<n;i++) cin>>nums[i+1];
    str = '0' + str;
    ll sum = 0;
    ll prev = 0;
    for(ll i=1;i<=n;i++){
        if(str[i] == '0'){
            prev = i;
        }
        else{
            if(nums[i] > nums[prev]){
                sum += nums[i];
            }
            else{
                sum += nums[prev];
                prev = i;
            }
        }
    }
    cout<<sum<<endl;
    

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

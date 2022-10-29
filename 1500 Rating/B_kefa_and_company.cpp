#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
void solve(){
    int n,d; cin>>n>>d;
    vector<pair<int,int>> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i].first>>nums[i].second;
    }
    sort(nums.begin(),nums.end());
    int left = 0, right = 0;
    ll sum = 0, curr = 0;
    while(right < n){
        while(right < n and nums[right].first - nums[left].first < d){
            curr += nums[right].second;
            right++;
            sum = max(sum,curr);
        }
;
        while(nums[right].first - nums[left].first >= d){
            curr -= nums[left].second;
            left++;  
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
    //cin>>test;
    while(test--){
        solve();
    }
    return 0;
}

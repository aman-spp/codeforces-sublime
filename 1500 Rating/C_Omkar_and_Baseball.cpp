#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
void solve(){
    int n; cin>>n;
    int cnt = 0, start = -1, end = n;
    vector<int> nums;
    for(int i=1;i<=n;i++){
        int temp; cin>>temp;
        nums.push_back(temp);
        if(i != temp){
            cnt++;
            if(start == -1) start = i-1;
        }
    }
    for(int i=n-1;i>0;i--){
        if(i+1 != nums[i]){
            if(end == n) end = i;
        }
    }
    // cout<<start<<" "<<end<<endl;
    if(cnt == 0){
        cout<<'0'<<endl;
        return;
    }
    else if(cnt == n){
        cout<<'1'<<endl;
    }
    else{
        bool check = false;
        for(int i=(start==-1?0:start);i<=(end==n?end-1:end);i++){
            if(nums[i] == i+1){
                check = true;
                break;
            }
        }
        if(check) cout<<'2'<<endl;
        else cout<<'1'<<endl;
    }


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

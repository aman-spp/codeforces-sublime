#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
void solve(){
    int n, m; cin>>n>>m;
    vector<int> nums(n+1,0);
    set<int> st;
    for(int i=1;i<=n+5;i++) st.insert(i);
    while(m--){
        int left,right,winner; cin>>left>>right>>winner;
        auto itr = st.lower_bound(left);
        while(*itr <= right && itr != st.end()){
            if(*itr != winner){
                nums[*itr] = winner;
                auto temp = itr;
                itr++;
                st.erase(temp);
            }
            else itr++;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<nums[i]<<" ";
    }
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

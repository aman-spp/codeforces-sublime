#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
bool check(vector<int>&hash, ll k){
    ll product = 1;
    for(int i=0;i<hash.size();i++){
        product *= hash[i];
    }
    return (product >= k);
}
void solve(){
    ll k; cin>>k;
    vector<int> hash(10,1);
    string store = "codeforces";
    while(true){
        bool flag = false;
        for(int i=0;i<hash.size();i++){
            bool temp = check(hash,k);
            if(temp){
                flag = true;
                break;
            }
            else{
                hash[i]++;
            }
        }
        if(flag) break;
    }
    string str = "";
    for(int i=0;i<hash.size();i++){
        while(hash[i]--){
            str += store[i];
        }
    }
    cout<<str<<endl;

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

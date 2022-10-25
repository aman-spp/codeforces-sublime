#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
void solve(){
    int n; cin>>n;
    string brk; cin>>brk;
    string str = "";
    int left = 0;
    int right = 0;
    stack<char> stk;
    for(int i=0;i<n;i++){
        if(brk[i] == '('){
            if(left <= right){
                str += '0';
                left++;
                stk.push('l');
            }
            else{
                str += '1';
                right++;
                stk.push('r');
            }
        }
        else{
            if(stk.top() == 'l'){
                left--;
                str += '0';
                stk.pop();
            }
            else{
                right--;
                str += '1';
                stk.pop();
            }
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
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}

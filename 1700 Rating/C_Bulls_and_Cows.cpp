#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
vector<string> all;
pair<int,int> cnt_bc(string &a, string &b){
    int bull = 0, cow = 0;
    for(int i=0;i<b.size();i++){
        if(a[i] == b[i]){
            bull++;
        }
        else if(b.find(a[i]) != string::npos){
            cow++;
        }
    }
    return {bull,cow};
}
void generat(vector<bool>&visited, string s){
    if(s.size() == 4){
        all.push_back(s);
        return;
    }
    for(int i=0;i<=9;i++){
        if(!visited[i]){
            visited[i] = true;
            generat(visited, s + to_string(i));
            visited[i] = false;
        }
    }
}
void solve(){
    string s = "";
    vector<bool> visited(10,false);
    generat(visited,s);
    // cout<<all.size();
    // for(auto x : all) cout<<x<<" "<<endl;
    int n; cin>>n;
    vector<pair<string,pair<int,int>>> store;
    for(int i=0;i<n;i++){
        string s;
        int b, c; cin>>s>>b>>c;
        store.push_back({s,{b,c}});
    }
    int cnt = 0;
    string ans;
    for(int i=0;i<all.size();i++){
        bool flag = false;
        for(int j=0;j<store.size();j++){
            string a = all[i];
            string b = store[j].first;
            pair<int,int> temp = cnt_bc(a,b);
            if(temp != store[j].second){
                cnt++;
                flag = true;
                break;
            }
        }
        if(!flag) ans = all[i];
    }
    if(cnt == 5039){
        cout<<ans<<endl;
    }
    else if(cnt < 5039){
        cout<<"Need more data"<<endl;
    }
    else{
        cout<<"Incorrect data"<<endl;
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

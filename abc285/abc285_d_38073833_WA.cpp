/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/38073833
 * Submitted at: 2023-01-15 13:32:19
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_d
 * Result: WA
 * Execution Time: 371 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<string,string>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;



map<string,string> mp;
map<P,bool> seen;
bool ans=true;
void dfs(string s){
    string t=mp[s];
    if(seen[P(s,t)]){
        //cout<< s<<" "<<t << endl;
        ans=false;
        return;
    }
    seen[P(s,t)]=true;
    if(mp.count(t)){
        dfs(t);
    }
}
int main(){
    int n;
    cin>>n;
    vector<string> s(n),t(n);
    rep(i,n){
        cin>>s[i]>>t[i];
        mp[s[i]]=t[i];
        seen[(P(s[i],t[i]))]=false;
    }
    for(auto [p,q]:mp){
        if(seen[P(p,q)]) continue;
        dfs(p);
    }
   
    cout << (ans ? "Yes" : "No") << endl;
    }

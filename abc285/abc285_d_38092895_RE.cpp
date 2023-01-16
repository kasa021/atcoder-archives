/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/38092895
 * Submitted at: 2023-01-16 06:11:35
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_d
 * Result: RE
 * Execution Time: 385 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;

map<string,int> mp;
graph g(100009);
vector<bool> seen(100009,false),finished(100009,false);
int pos=-1;
void dfs(int v,int pre){
   seen[v]=true;
   for(auto nv:g[v]){
    if(nv==pre) continue;
    if(finished[nv]) continue;
    if(seen[nv] && !finished[nv]){
        pos=nv;
        return;
    }
    dfs(nv,v);
    if(pos!=-1) return;
   }
   finished[v]=true;
}
int main()
{
    int n,size=0;
    cin>>n;
    rep(i,n){
        string s,t;
        cin>>s>>t;
        if(mp.find(s) == mp.end())mp[s]=size++;
        if(mp.find(t) == mp.end())mp[t]=size++;
        g[mp[s]].push_back(mp[t]);
    }
    rep(i,size+1){
        if(seen[i]) continue;
        dfs(i,-1);
    }
    if(pos==-1) cout<< "Yes" << endl;
    else cout<< "No" << endl;
}

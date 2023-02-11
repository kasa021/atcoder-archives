/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc289/submissions/38804197
 * Submitted at: 2023-02-11 12:51:46
 * Problem URL: https://atcoder.jp/contests/abc289/tasks/abc289_b
 * Result: RE
 * Execution Time: 117 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

vector<int> ans;

graph g(100);
vector<bool> seen(100,false);
void dfs(int i){
    seen[i]=true;
    for(auto v:g[i]){
        if(seen[v]) continue;
        dfs(v);
    }
    //cout<<i<<" ";
    ans.push_back(i);
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    rep(i,m) cin>>a[i];
    rep(i,m){
        g[a[i]].push_back(a[i]+1);
        g[a[i]+1].push_back(a[i]);
    }
    rep(i,n){
        if(seen[i+1])continue;
        dfs(i+1);
    }
    //cout<<endl;
    rep(i,n) cout<<ans[i]<<" ";
     cout<<endl;
}
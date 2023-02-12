/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc289/submissions/38834337
 * Submitted at: 2023-02-12 05:04:00
 * Problem URL: https://atcoder.jp/contests/abc289/tasks/abc289_b
 * Result: AC
 * Execution Time: 8 ms
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

vector<bool> seen(200,false);
vector<int> ans;
graph g(200);
void dfs(int v){
    seen[v]=true;
    for(auto nv:g[v]){
        if(seen[nv]) continue;
        dfs(nv);
    }
    ans.push_back(v);
}

int main()
{
    int n,m;
    cin>>n>>m;
    rep(i,m){
        int a;
        cin>>a;
        g[a].push_back(a+1);
        g[a+1].push_back(a);
    }
    rep(i,n){
        if(seen[i+1]) continue;
        dfs(i+1);
    }
    rep(i,n) cout<< ans[i] << " ";
    cout<<endl;
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/36477829
 * Submitted at: 2022-11-13 13:06:48
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_c
 * Result: AC
 * Execution Time: 594 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int ans=1;

void dfs(int v,map<int,vector<int>> &g,map<int,bool> &seen){
    seen[v]=true;
    for(auto nv:g[v]){
        if(seen[nv]) continue;
        ans=max(ans,nv);
        dfs(nv,g,seen);
    }
}

int main(){
      int n;
      cin>>n;
      map<int,vector<int>> g;
      map<int,bool> seen;
      rep(i,n){
        int a,b;
        cin>>a>>b;
        seen[a]=false;
        seen[b]=false;
        g[a].push_back(b);
        g[b].push_back(a);
      }
      dfs(1,g,seen);
      cout<< ans << endl;
    }
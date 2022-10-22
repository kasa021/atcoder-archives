/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc138/submissions/35845870
 * Submitted at: 2022-10-22 02:15:44
 * Problem URL: https://atcoder.jp/contests/abc138/tasks/abc138_d
 * Result: AC
 * Execution Time: 548 ms
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

vector<int> g[200005];
vector<int> ans;
void dfs(int v,int p=-1){
    for(int u:g[v]){
        if(u==p) continue;
        ans[u]+=ans[v];
        dfs(u,v);
    }
}

int main(){
    int n,q;
      cin>>n>>q;
      rep(i,n-1){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
      }
      ans.resize(n);
      rep(i,q){
        int p,x;
        cin>>p>>x;
        p--;
        ans[p]+=x;
      }
      dfs(0);
      rep(i,n){
        cout<< ans[i] << endl;
      }
      return 0;
    }
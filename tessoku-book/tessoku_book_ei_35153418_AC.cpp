/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35153418
 * Submitted at: 2022-09-25 04:43:03
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ei
 * Result: AC
 * Execution Time: 88 ms
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


int n,m;
graph g(100009);
vector<bool> seen(100009,false);
vector<int> pre(100009,-1);

void dfs(int v){
    seen[v]=true;
    for(auto nv:g[v]){
        if(seen[nv]) continue;
        pre[nv]=v;
        dfs(nv);
    }
}


int main(){
      cin>>n>>m;
      //graph g(n+1);
      rep(i,m){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }

      dfs(1);
      vector<int> ans;
      int now=n;
      while(now!=-1){
        //cout<<now<<" ";
        ans.push_back(now);
        now=pre[now];
      }
      //      cout<<endl;

      reverse(all(ans));
      rep(i,(int)ans.size()){
        cout<<ans[i]<<" ";
      }
      cout<<endl;
    }
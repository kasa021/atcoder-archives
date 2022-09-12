/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc213/submissions/34819152
 * Submitted at: 2022-09-12 11:15:17
 * Problem URL: https://atcoder.jp/contests/abc213/tasks/abc213_d
 * Result: AC
 * Execution Time: 186 ms
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

int n;
graph g(200009);
vector<bool> visit(200009,false);

void dfs(int s){
    cout<< s << " ";
    for(auto v:g[s]){
        if(::visit[v]) continue;
        ::visit[v]=true;
        dfs(v);
        cout<< s << " ";
    }
}

int main(){
      cin>>n;

      rep(i,n-1){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }
      rep1(i,1,n+1){
        sort(g[i].begin(),g[i].end());
      }
      ::visit[1]=true;
      dfs(1);
    //   rep1(i,1,n+1){
    //     for(auto v:g[i]) cout<<v<<" ";
    //     cout<<endl;
    //   }
      cout<<endl;
    }
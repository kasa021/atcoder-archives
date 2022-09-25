/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35153245
 * Submitted at: 2022-09-25 04:31:18
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_am
 * Result: AC
 * Execution Time: 75 ms
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

void dfs(int v){
    seen[v]=true;
    for(auto nv:g[v]){
        if(seen[nv]) continue;
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
//cout<<"1";
      dfs(1);
      rep1(i,1,n+1){
        if(!seen[i]){
            cout<<" The graph is not connected."<<endl;
          return 0;
        }
      }
      cout<< "The graph is connected. " << endl;
    }

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37919161
 * Submitted at: 2023-01-10 06:22:55
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_c
 * Result: AC
 * Execution Time: 6 ms
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
//typedef modint1000000007 mint;

int n,m;
graph g(109);

int ans=0;
vector<bool> seen(109,false);
void dfs(int v){
   seen[v]=true;
   for(auto nv:g[v]){
       if(seen[nv]) continue;
       dfs(nv);
   }
}
int main(){
      cin>>n>>m;
      rep(i,m){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }
      rep1(i,1,n+1){
        if(!seen[i]){
            ans++;
            dfs(i);
        }
      }
      cout<< ans << endl;
    }

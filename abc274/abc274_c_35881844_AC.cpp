/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35881844
 * Submitted at: 2022-10-22 12:36:49
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_c
 * Result: AC
 * Execution Time: 591 ms
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
//int ans;
// graph g(400009);
// void dfs(int v,int k){
//    ans=k;
//    for(auto nv:g[v]){
//        if(nv>v) continue;
//        dfs(nv,k+1);
//    }
// }
int main(){
      //int n;
      cin>>n;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      vector<int> ans(400009,0);
      
      //graph g(n+1);
      rep(i,n){
        int s,t;
        s=(i+1)*2;
        t=(i+1)*2+1;
        ans[s]=ans[a[i]]+1;
        ans[t]=ans[a[i]]+1;
        // cout<< s<<" "<<ans[s] << endl;
        // cout<< t<<" "<<ans[t] << endl;

      }
      rep1(i,1,2*n+2){
       cout<< ans[i] << endl; 
      }
    }
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc026/submissions/37921014
 * Submitted at: 2023-01-10 08:06:39
 * Problem URL: https://atcoder.jp/contests/abc026/tasks/abc026_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;

void dfs(int v,vector<int>& salary,vector<vector<int>>& g){
    int mn=INT_MAX,mx=0;
    for(auto nv:g[v]){
        if(salary[nv]==0){
            if((int)g[nv].size()==0) salary[nv]=1;
            else dfs(nv,salary,g);
        }
        mn=min(mn,salary[nv]);
        mx=max(mx,salary[nv]);
    }
    salary[v]=mn+mx+1;
}

int main(){
      int n;
      cin>>n;
      graph g(n+9);
      rep(i,n-1){
        int a;
        cin>>a;
        g[a].push_back(i+2);
      }
      vector<int> salary(n+9,0);
      dfs(1,salary,g);
      cout<< salary[1] << endl;
      
    }

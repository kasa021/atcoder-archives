/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc015/submissions/37921408
 * Submitted at: 2023-01-10 08:29:40
 * Problem URL: https://atcoder.jp/contests/abc015/tasks/abc015_3
 * Result: WA
 * Execution Time: 8 ms
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

bool ans=true;
int n,k;
void dfs(int idx,int now,vector<vector<int>>& t){
    if(n-1==idx){
        if(now==0) ans=false;
    }else{
        rep(i,k){
           now^=t[idx][i];
           dfs(idx+1,now,t);
        }
    }
    
}
int main(){
      cin>>n>>k;
      vector<vector<int>> t(n+9,vector<int>(k+9,0));
      rep(i,n){
        rep(j,k){
            cin>>t[i][j];
        }
      }
      dfs(0,0,t);
      cout << (ans ? "Nothing" : "Found") << endl;
    }

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37918996
 * Submitted at: 2023-01-10 06:12:13
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

int main(){
      int n,m;
      cin>>n>>m;
      dsu uf(n+9);
      rep(i,m){
        int a,b;
        cin>>a>>b;
        uf.merge(a,b);
      }
      int ans=0;
      rep(i,n){
        if(i+1==uf.leader(i+1)) ans++;
      }
      cout<< ans << endl;
    }

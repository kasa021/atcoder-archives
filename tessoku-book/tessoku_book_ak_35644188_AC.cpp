/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35644188
 * Submitted at: 2022-10-14 14:17:17
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ak
 * Result: AC
 * Execution Time: 57 ms
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

int main(){
      ll n,m,b;
      cin>>n>>m>>b;
      ll sum=0;
      vector<ll> a(n),c(m);
      rep(i,n) cin>>a[i]; 
      rep(i,m) cin>>c[i]; 
      rep(i,n) sum+=a[i]*m;
      rep(i,m) sum+=c[i]*n;

      sum+=m*n*b;
      cout<< sum << endl;
    }
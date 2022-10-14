/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35644123
 * Submitted at: 2022-10-14 14:14:14
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ak
 * Result: WA
 * Execution Time: 56 ms
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
      int n,m,b;
      cin>>n>>m>>b;
      ll suma=0,sumc=0;
      vector<int> a(n),c(m);
      rep(i,n) {cin>>a[i]; suma+=a[i]*m;}
      rep(i,m) {cin>>c[i]; sumc+=c[i]*n;}
      ll sum=0;
      sum+=suma;
      sum+=sumc;
      sum+=m*n*b;
      cout<< sum << endl;
    }
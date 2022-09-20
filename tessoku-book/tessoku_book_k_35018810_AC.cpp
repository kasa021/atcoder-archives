/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35018810
 * Submitted at: 2022-09-20 15:23:48
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_k
 * Result: AC
 * Execution Time: 38 ms
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
      int n,x;
      cin>>n>>x;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      sort(a.begin(),a.end());
      auto s=lower_bound(a.begin(),a.end(),x)-a.begin()+1;
      cout<< s << endl;
    }
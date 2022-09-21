/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35035524
 * Submitted at: 2022-09-21 14:49:14
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_p
 * Result: AC
 * Execution Time: 41 ms
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
      int n;
      cin>>n;
      vector<int> a(n+10),b(n+10);
      rep1(i,2,n+1) cin>>a[i];
      rep1(i,3,n+1) cin>>b[i];
      vector<int> dp(n+10);
      b[2]=1000;
      rep1(i,2,n+1){
        dp[i]=min(dp[i-1]+a[i],dp[i-2]+b[i]);
      }
      cout<< dp[n] << endl;
    }
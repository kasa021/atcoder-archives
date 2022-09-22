/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35048191
 * Submitted at: 2022-09-22 12:06:35
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_v
 * Result: AC
 * Execution Time: 51 ms
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
      vector<int> a(n+1),b(n+1);
      rep1(i,1,n) cin>>a[i];
      rep1(i,1,n) cin>>b[i];
      vector<int> dp(n+10);
      for (int i = 2; i <= n; i++) dp[i] = -1000000000;
      rep1(i,1,n){
        dp[a[i]]=max(dp[a[i]],dp[i]+100);
        dp[b[i]]=max(dp[b[i]],dp[i]+150);
      }
      cout<<dp[n]<<endl;
    }

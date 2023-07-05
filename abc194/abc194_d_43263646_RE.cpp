/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/43263646
 * Submitted at: 2023-07-05 04:43:58
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_d
 * Result: RE
 * Execution Time: 2411 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  int n;
  cin >> n;
  vector<vector<double>> dp(n+1,vector<double>(n+1,0));
  auto f = [&] (auto f,int i,int j){
    if(dp[i][j] != 0) return dp[i][j];
    if(i==n && j==0) return 0.0;
    double res = (double) n / (n - i);
    res += (double)(j)/(n-i)*f(f,i+1,j-1);
    return dp[i][j] = res;
  };

  cout << fixed << setprecision(10) << f(f,1,n-1) << endl;
}

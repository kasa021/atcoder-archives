/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/43263988
 * Submitted at: 2023-07-05 05:03:30
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_d
 * Result: AC
 * Execution Time: 22 ms
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
  vector<double> dp(n+1);

  auto f = [&] (auto f,int i){
    if(dp[i] > 0) return dp[i];
    if(i==n) return 0.0;
    double res = (double) n / (n - i);
    res += (double)f(f,i+1);
    return dp[i] = res;
  };

  cout << fixed << setprecision(10) << f(f,1)<< endl;
}

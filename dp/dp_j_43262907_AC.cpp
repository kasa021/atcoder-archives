/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/43262907
 * Submitted at: 2023-07-05 03:56:37
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_j
 * Result: AC
 * Execution Time: 407 ms
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
  cin>>n;
  vector<double> a(n);
  rep(i, n) cin>>a[i];
  vector<vector<vector<double>>> dp(n+1,vector<vector<double>>(n+1, vector<double>(n+1, 0.0)));

  auto f = [&](auto f,int i,int j,int k) -> double {
    if (dp[i][j][k] > 0) return dp[i][j][k];
    if (i == 0 && j == 0 && k == 0) return 0.0;
    double res = 1/(1-(double)(n-i-j-k)/n);
    if(i>0) res += f(f,i-1,j,k)*i/n/(1-(double)(n-i-j-k)/n);
    if(j>0) res += f(f,i+1,j-1,k)*j/n/(1-(double)(n-i-j-k)/n);
    if(k>0) res += f(f,i,j+1,k-1)*k/n/(1-(double)(n-i-j-k)/n);
    return dp[i][j][k] = res;
  };

  vector<int> cnt(4, 0);
  rep(i, n) cnt[a[i]]++;
  cout<<fixed<<setprecision(10);
  cout << f(f, cnt[1], cnt[2], cnt[3]) << endl;

  return 0;
  
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/keyence2019/submissions/43286750
 * Submitted at: 2023-07-06 05:52:20
 * Problem URL: https://atcoder.jp/contests/keyence2019/tasks/keyence2019_c
 * Result: AC
 * Execution Time: 78 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n,ans=0;
  ll sum = 0,sum_a=0,sum_b=0;
  cin >> n;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  vector<ll> c(n);
  rep(i, n){
    sum_a += a[i];
    sum_b += b[i];
    c[i] = a[i] - b[i];
    if (c[i] < 0){
      ans++;
      sum += abs(c[i]);
    }
  }
  if(sum_a < sum_b){
    cout << -1 << endl;
    return 0;
  }

  sort(all(c), greater<ll>());
  int i = 0;
  while(sum > 0){
    sum -= c[i];
    i++;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc028/submissions/43206316
 * Submitted at: 2023-07-02 17:28:20
 * Problem URL: https://atcoder.jp/contests/agc028/tasks/agc028_a
 * Result: AC
 * Execution Time: 10 ms
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
  long n, m;
  string s, t;
  cin >> n >> m >> s >> t;
  long l = lcm(n, m), a = l / n, b = l / m;
  {
    long i = 0, j = 0;
    while (i < n && j < m) {
      if (s[i] != t[j]) {
        puts("-1");
        return 0;
      }
      i += b;
      j += a;
    }
  }
  cout << l << endl;
}

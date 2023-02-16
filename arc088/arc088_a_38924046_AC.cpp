/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc088/submissions/38924046
 * Submitted at: 2023-02-16 10:03:43
 * Problem URL: https://atcoder.jp/contests/arc088/tasks/arc088_a
 * Result: AC
 * Execution Time: 12 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll x, y;
  cin >> x >> y;
  ll ans = 0;
  while (x <= y) {
    ans++;
    x *= 2;
  }
  cout << ans << endl;
  return 0;
}
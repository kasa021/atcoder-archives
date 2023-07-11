/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43477792
 * Submitted at: 2023-07-11 06:28:31
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_cd
 * Result: CE
 * Execution Time: None ms
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

typedef mint modint1000000007;
typedef unsigned long long ull;

mint sum(mint l,mint r){
  return (l+r)*(r-l+1)/2;
}

mint f(int n,ull l,ull r){
  ull p = 1;
  rep(i,n) p *= 10;
  ull up = p * 10 - 1;
  if (l > up) return 0;
  if (r < up) return 0;
  return sum(max(l, p), min(r, up)) * (n + 1);
}

int main() {
  ull l, r;
  cin >> l >> r;
  mint ans = 0;
  rep(i, 19) {
    ans += f(i, l, r);
  }
  cout << ans.val() << endl;
  return 0;
}

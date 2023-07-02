/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/43206623
 * Submitted at: 2023-07-02 18:02:31
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_c
 * Result: WA
 * Execution Time: 8 ms
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
  ll a, b, c;
  cin >> a >> b >> c;
  if(4*a*b < (c-a-b)*(c-a-b)) cout << "Yes" << endl;
  else cout << "No" << endl;
}

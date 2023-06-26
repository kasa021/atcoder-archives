/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42973418
 * Submitted at: 2023-06-26 05:01:14
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_t
 * Result: AC
 * Execution Time: 8 ms
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
  ll a, b, c;
  cin>>a>>b>>c;
  ll product = 1;
  rep(i,b) product *= c;
  if(a < product) cout << "Yes" << endl;
  else cout << "No" << endl;
}
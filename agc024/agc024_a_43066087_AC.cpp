/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc024/submissions/43066087
 * Submitted at: 2023-06-30 10:53:06
 * Problem URL: https://atcoder.jp/contests/agc024/tasks/agc024_a
 * Result: AC
 * Execution Time: 7 ms
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
  ll a, b, c, k;
  cin>>a>>b>>c>>k;
  if(k %2==0) cout << a-b << endl;
  else cout << b-a << endl;
}
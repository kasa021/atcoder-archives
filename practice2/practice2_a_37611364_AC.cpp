/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/37611364
 * Submitted at: 2022-12-29 06:07:55
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_a
 * Result: AC
 * Execution Time: 248 ms
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
// typedef modint1000000007 mint;
int main()
{
  int n, q;
  cin >> n >> q;
  dsu uf(n);
  rep(i, q)
  {
    int t, u, v;
    cin >> t >> u >> v;
    if (t == 0)
    {
      uf.merge(u, v);
    }
    else
      cout << (uf.same(u, v) ? "1" : "0") << endl;
  }
}

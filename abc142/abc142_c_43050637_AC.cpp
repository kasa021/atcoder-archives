/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc142/submissions/43050637
 * Submitted at: 2023-06-29 14:08:14
 * Problem URL: https://atcoder.jp/contests/abc142/tasks/abc142_c
 * Result: AC
 * Execution Time: 44 ms
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
  int n;
  cin >> n;
  vector<P> a(n);
  rep(i,n) {
    int tmp;
    cin >> tmp;
    a[i] = make_pair(tmp, i+1);
  }
  sort(all(a));
  rep(i,n) cout<<a[i].second<<" ";
  cout << endl;
}
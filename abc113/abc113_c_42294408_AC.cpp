/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc113/submissions/42294408
 * Submitted at: 2023-06-16 10:47:33
 * Problem URL: https://atcoder.jp/contests/abc113/tasks/abc113_c
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

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> p(m), y(m);
  rep(i, m) cin >> p[i] >> y[i];
  vector<vector<int>> city(n + 1);
  rep(i, m) {
    city[p[i]].push_back(y[i]);
  }
  rep(i, n + 1) {
    sort(all(city[i]));
  }
  rep(i, m) {
    auto itr = lower_bound(all(city[p[i]]), y[i]) - city[p[i]].begin();
    string city_num = to_string(p[i]);
    string num = to_string(itr + 1);
    while (city_num.size() < 6) city_num = "0" + city_num;
    while (num.size() < 6) num = "0" + num;
    cout << city_num << num << endl;
  }
}
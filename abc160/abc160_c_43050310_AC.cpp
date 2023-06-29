/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc160/submissions/43050310
 * Submitted at: 2023-06-29 13:54:19
 * Problem URL: https://atcoder.jp/contests/abc160/tasks/abc160_c
 * Result: AC
 * Execution Time: 56 ms
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
  int k, n;
  cin >> k >> n;
  vector<int> a;
  rep(i, n){
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
  }
  int max_dist = 0;
  rep(i, n - 1){
    max_dist = max(max_dist, a[i + 1] - a[i]);
  }
  max_dist = max(max_dist, k - a[n - 1] + a[0]);
  cout << k - max_dist << endl;

}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc088/submissions/42832068
 * Submitted at: 2023-06-22 14:40:00
 * Problem URL: https://atcoder.jp/contests/abc088/tasks/abc088_b
 * Result: AC
 * Execution Time: 4 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  
  int alice = 0, bob = 0;
  sort(all(a), greater<int>());
  rep(i, n){
    if(i % 2 == 0) alice += a[i];
    else bob += a[i];
  }
  cout << alice - bob << endl;
}
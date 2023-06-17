/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc306/submissions/42316340
 * Submitted at: 2023-06-17 12:01:10
 * Problem URL: https://atcoder.jp/contests/abc306/tasks/abc306_a
 * Result: AC
 * Execution Time: 13 ms
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
  string s;
  cin >> s;
  rep(i,n){
    cout << s[i] << s[i];
  }
  cout << endl;
}
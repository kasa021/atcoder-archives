/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc084/submissions/43052062
 * Submitted at: 2023-06-29 15:35:49
 * Problem URL: https://atcoder.jp/contests/abc084/tasks/abc084_b
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
  int a, b;
  string s;
  cin >> a >> b >> s;
  int cnt = 0;
  rep(i,s.size()){
    if(s[i]=='-') cnt++;
  }
  if(cnt == 1 && s[a]=='-') cout << "Yes" << endl;
  else cout << "No" << endl;
}
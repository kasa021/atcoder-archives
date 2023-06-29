/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc052/submissions/43052028
 * Submitted at: 2023-06-29 15:32:59
 * Problem URL: https://atcoder.jp/contests/abc052/tasks/abc052_b
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
  int n;
  string s;
  cin >> n >> s;
  int x = 0;
  int ans = 0;
  rep(i,n){
    if(s[i]=='I') x++;
    else x--;
    ans = max(ans, x);
  }
  cout << ans << endl;
}
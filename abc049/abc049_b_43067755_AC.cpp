/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc049/submissions/43067755
 * Submitted at: 2023-06-30 12:28:47
 * Problem URL: https://atcoder.jp/contests/abc049/tasks/abc049_b
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
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  rep(i,h){
    cout<<s[i]<<endl;
    cout<<s[i]<<endl;
  }
  return 0;
}

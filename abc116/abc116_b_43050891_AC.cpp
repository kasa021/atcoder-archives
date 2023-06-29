/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc116/submissions/43050891
 * Submitted at: 2023-06-29 14:19:07
 * Problem URL: https://atcoder.jp/contests/abc116/tasks/abc116_b
 * Result: AC
 * Execution Time: 6 ms
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
  int s;
  cin >> s;
  int ans = 0;
  set<int> st;
  while(true){
    if (st.count(s)) break;
    st.insert(s);
    ans++;
    if (s % 2 == 0) {
      s /= 2;
    } else {
      s = 3 * s + 1;
    }
  }
  cout << ans + 1 << endl;
}
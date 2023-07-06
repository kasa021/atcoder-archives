/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc022/submissions/43286234
 * Submitted at: 2023-07-06 05:22:30
 * Problem URL: https://atcoder.jp/contests/agc022/tasks/agc022_a
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

vector<bool> used(26);

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    used[s[i] - 'a'] = 1;
  }
  if (s.length() < 26) {
    for (int i = 0; i < 26; i++) {
      if (!used[i]) {
        s += char('a' + i);
        break;
      }
    }
    cout << s << '\n';
  }
  else {
    int id = -1;
    for (int i = int(s.length()) - 2; i >= 0; i--) {
      if (s[i] < s[i + 1]) {
        id = i;
        break;
      }
    }
    if (id == -1) {
      cout << -1 << '\n';
    }
    else {
      string t = s.substr(0, id);
      int idx2 = id + 1;
      for (int i = id + 1; i < s.length(); i++) {
        if (s[i] < s[idx2] && s[i] > s[id]) {
          idx2 = i;
        }
      }
      t += s[idx2];
      cout << t << '\n';
    }
  }

  return 0;
}
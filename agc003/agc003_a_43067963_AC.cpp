/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc003/submissions/43067963
 * Submitted at: 2023-06-30 12:38:45
 * Problem URL: https://atcoder.jp/contests/agc003/tasks/agc003_a
 * Result: AC
 * Execution Time: 12 ms
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
  string s;
  cin >> s;
  map<char, int> mp;
  rep(i, s.size()) {
    mp[s[i]]++;
  }

  if(mp['N'] > 0 && mp['S'] == 0) {
    cout << "No" << endl;
    return 0;
  }
  if(mp['S'] > 0 && mp['N'] == 0) {
    cout << "No" << endl;
    return 0;
  }
  if(mp['W'] > 0 && mp['E'] == 0) {
    cout << "No" << endl;
    return 0;
  }
  if(mp['E'] > 0 && mp['W'] == 0) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
}

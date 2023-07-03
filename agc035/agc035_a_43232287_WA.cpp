/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc035/submissions/43232287
 * Submitted at: 2023-07-03 17:32:30
 * Problem URL: https://atcoder.jp/contests/agc035/tasks/agc035_a
 * Result: WA
 * Execution Time: 51 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  set<int> st;
  rep(i, n) st.insert(a[i]);

  if (st.size() == 1) {
    if (a[0] == 0) cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  else if (st.size() == 2) {
    int cnt_0 = 0;
    int cnt_x = 0;
    rep(i, n) {
      if (a[i] == 0) cnt_0++;
      else
        cnt_x++;
    }
    if (cnt_0 == n / 3 && cnt_x == 2 * n / 3 && n % 3 == 0) cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  else if (st.size() == 3) {
    int cnt_x = 0;
    int cnt_y = 0;
    int cnt_z = 0;
    int x = *(st.begin()), y = *next(st.begin(), 1), z = *next(st.begin(), 2);
    rep(i, n) {
      if (a[i] == x) cnt_x++;
      else if (a[i] == y)
        cnt_y++;
      else
        cnt_z++;
    }
    if (cnt_x == cnt_y && cnt_y == cnt_z && n % 3 == 0) cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  else
    cout << "No" << endl;
}

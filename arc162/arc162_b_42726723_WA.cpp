/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc162/submissions/42726723
 * Submitted at: 2023-06-18 13:38:12
 * Problem URL: https://atcoder.jp/contests/arc162/tasks/arc162_b
 * Result: WA
 * Execution Time: 9 ms
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
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i], a[i]--;
  int cnt = 0;
  vector<P> ans;
  while (cnt < n - 1) {
    int idx = -1;
    rep(i, n - 1) {
      if (cnt == a[i]) {
        // cout << i << " " << cnt << endl;
        ans.push_back({ i, cnt });
        idx = i;
      }
      //   cout<< a[i] << endl;
    }
    if (idx == -1) {
      cout << "No" << endl;
      return 0;
    }
    // cout << idx << " " << cnt << endl;
    rep(i, n) {
      if (i < cnt) b[i] = a[i];
      else if (cnt <= i && i <= idx + 1) {
        if (i == cnt) b[i] = a[idx];
        else if (i == cnt + 1)
          b[i] = a[idx + 1];
        else
          b[i] = a[i - 2];
      }
      else
        b[i] = a[i];
    }
    // rep(i, n) cout << b[i] << " ";
    // cout << endl;
    cnt++;
    a = b;
    // cout<<"cnt "<<cnt<<endl;
  }
//   cout << "out" << endl;
  bool flag = true;
  rep(i, n) {
    if (a[i] != i) flag = false;
  }
  if (!flag) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  cout << ans.size() << endl;
  rep(i, ans.size()) {
    cout << ans[i].first + 1 << " " << ans[i].second << endl;
  }
}
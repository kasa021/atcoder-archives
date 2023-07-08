/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43349278
 * Submitted at: 2023-07-08 12:11:54
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_a
 * Result: WA
 * Execution Time: 7 ms
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
  int a, b;
  cin >> a >> b;
  set<P> st;
  st.insert({ 1, 2 });
  st.insert({ 2, 3 });
  st.insert({ 4, 5 });
  st.insert({ 5, 6 });
  st.insert({ 7, 8 });
  st.insert({ 8, 9 });
  st.insert({ 1, 4 });
  st.insert({ 2, 5 });
  st.insert({ 3, 6 });
  st.insert({ 4, 7 });
  st.insert({ 5, 8 });
  st.insert({ 6, 9 });

  if (st.count({ a, b })) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

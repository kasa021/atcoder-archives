/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc063/submissions/43052002
 * Submitted at: 2023-06-29 15:31:17
 * Problem URL: https://atcoder.jp/contests/abc063/tasks/abc063_b
 * Result: AC
 * Execution Time: 16 ms
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
  cin>>s;
  int n = s.size();
  set<char> st;
  rep(i, n) st.insert(s[i]);
  if(n==st.size()) cout << "yes" << endl;
  else cout << "no" << endl;
}
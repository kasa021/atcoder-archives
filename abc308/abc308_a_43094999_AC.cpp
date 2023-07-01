/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43094999
 * Submitted at: 2023-07-01 12:06:21
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_a
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
  vector<int> s(8);
  rep(i,8) cin>>s[i];
  bool ok1=true, ok2=true, ok3=true;
  rep(i,7){
    if(s[i]>s[i+1]) ok1 = false;

  }
  rep(i,8) {
    if(s[i] < 100 || s[i] >675) ok2 = false;
    if(s[i] % 25 != 0) ok3 = false;
  }

  if(ok1 && ok2 && ok3) cout << "Yes" << endl;
  else cout << "No" << endl;
}
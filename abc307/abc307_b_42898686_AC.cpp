/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42898686
 * Submitted at: 2023-06-24 12:07:43
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_b
 * Result: AC
 * Execution Time: 7 ms
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
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  rep(i,n){
    rep(j,n){
      if(i==j) continue;
      string t = s[i] + s[j];
      bool ok = true;
      rep(j,t.size()){
        if(t[j] != t[t.size()-1-j]) ok = false;
      }
      if(ok){
        cout<< "Yes" << endl;
        return 0;
      }
    }
  }
  cout<< "No" << endl;
}
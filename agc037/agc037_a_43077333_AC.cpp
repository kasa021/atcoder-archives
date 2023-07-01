/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc037/submissions/43077333
 * Submitted at: 2023-07-01 03:38:57
 * Problem URL: https://atcoder.jp/contests/agc037/tasks/agc037_a
 * Result: AC
 * Execution Time: 18 ms
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  string s;
  cin >> s;
  string now="",prev="";
  int ans = 0;
  rep(i,s.size()){
    now += s[i];
    if(now != prev){
      ans++;
      prev = now;
      now = "";
    }
  }
  cout << ans << endl;
}

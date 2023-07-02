/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/keyence2019/submissions/43180188
 * Submitted at: 2023-07-02 09:05:22
 * Problem URL: https://atcoder.jp/contests/keyence2019/tasks/keyence2019_b
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
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;

vector<int> mx = { 1, 0, -1, 0, 1, 1, -1, -1 };
vector<int> my = { 0, 1, 0, -1, 1, -1, 1, -1 };

int main() {
  string s;
  cin >> s;
  string t = "keyence";
  rep(i,8){
    string tmp = s.substr(0,i) + s.substr(s.size()-7+i,7-i);
    if(tmp == t){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;

  return 0;
}

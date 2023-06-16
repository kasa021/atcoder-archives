/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc143/submissions/42295343
 * Submitted at: 2023-06-16 11:47:44
 * Problem URL: https://atcoder.jp/contests/abc143/tasks/abc143_c
 * Result: AC
 * Execution Time: 10 ms
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
  string s;
  cin >> n >> s;
  vector<pair<char, int>> vec;
  vec.push_back(make_pair(s[0], 0));
  rep(i,n){
    if (vec.back().first == s[i]) vec.back().second++;
    else vec.push_back(make_pair(s[i], 1));
  }

  cout << vec.size() << endl;
}
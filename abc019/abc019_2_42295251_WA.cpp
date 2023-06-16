/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc019/submissions/42295251
 * Submitted at: 2023-06-16 11:43:44
 * Problem URL: https://atcoder.jp/contests/abc019/tasks/abc019_2
 * Result: WA
 * Execution Time: 5 ms
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
  vector<pair<char, int>> vec;
  vec.push_back(make_pair(s[0], 0));
  rep(i,s.size()){
    if(vec.back().first == s[i]) vec.back().second++;
    else vec.push_back(make_pair(s[i], 1));
  }
  rep(i,vec.size()){
    cout << vec[i].first << vec[i].second;
  }
}
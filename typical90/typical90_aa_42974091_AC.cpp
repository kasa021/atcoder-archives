/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42974091
 * Submitted at: 2023-06-26 05:30:29
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_aa
 * Result: AC
 * Execution Time: 254 ms
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
  cin>>n;
  set<string> st;
  rep(i,n){
    string s;
    cin >> s;
    if(st.count(s))continue;
    else {
      st.insert(s);
      cout << i+1 << endl;
    }
  }
  return 0;
}
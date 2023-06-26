/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42974891
 * Submitted at: 2023-06-26 06:08:20
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ag
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
  int h, w;
  cin>>h>>w;
  if(h==1 || w==1) {
    cout << h*w << endl;
    return 0;
  }
  int ans = 0;
  for (int i = 0; i < h; i += 2) {
    for (int j = 0; j < w;j+=2){
      ans++;
    }
  }
  cout << ans << endl;
}

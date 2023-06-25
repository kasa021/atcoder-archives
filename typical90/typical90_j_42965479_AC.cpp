/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42965479
 * Submitted at: 2023-06-25 15:02:30
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_j
 * Result: AC
 * Execution Time: 233 ms
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

  vector<int> sum1(n+1, 0);
  vector<int> sum2(n+1, 0);
  rep(i,n){
    int c, p;
    cin >> c >> p;
    if(c == 1){
      sum1[i+1] = sum1[i] + p;
      sum2[i+1] = sum2[i];
    }
    else{
      sum1[i+1] = sum1[i];
      sum2[i+1] = sum2[i] + p;
    }
  }

  int q;
  cin >> q;
  rep(i,q){
    int l, r;
    cin >> l >> r;
    l--; r--;
    int ans1 = sum1[r+1] - sum1[l];
    int ans2 = sum2[r+1] - sum2[l];
    cout << ans1 << " " << ans2 << endl;
  }
}
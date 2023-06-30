/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/code-festival-2017-qualc/submissions/43070498
 * Submitted at: 2023-06-30 14:30:51
 * Problem URL: https://atcoder.jp/contests/code-festival-2017-qualc/tasks/code_festival_2017_qualc_b
 * Result: AC
 * Execution Time: 12 ms
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
  int n,ans =0;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int number_of_patterns = pow(3, n);

  rep(i, number_of_patterns){
    int tmp = i;
    vector<int> pattern(n);
    rep(j,n){
      pattern[j] = tmp % 3;
      tmp /= 3;
    }

    int multiplication = 1;
    rep(j,n){
      if (pattern[j] == 0) multiplication *= a[j];
      else if (pattern[j] == 1) multiplication *= a[j] + 1;
      else multiplication *= a[j] - 1;
    }
    if(multiplication % 2 == 0) ans++;
  }
  cout << ans << endl;
}

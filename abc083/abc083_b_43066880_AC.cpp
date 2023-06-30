/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc083/submissions/43066880
 * Submitted at: 2023-06-30 11:49:30
 * Problem URL: https://atcoder.jp/contests/abc083/tasks/abc083_b
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
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  rep1(i,1,n+1){
    int sum = 0;
    int tmp = i;
    while(tmp > 0){
      sum += tmp % 10;
      tmp /= 10;
    }
    if(a <= sum && sum <= b) ans += i;
  }
  cout << ans << endl;
}
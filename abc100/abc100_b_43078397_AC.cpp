/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc100/submissions/43078397
 * Submitted at: 2023-07-01 04:56:41
 * Problem URL: https://atcoder.jp/contests/abc100/tasks/abc100_b
 * Result: AC
 * Execution Time: 15 ms
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
  int d, n;
  cin >> d >> n;
  int cnt = 0, tmp = 0,num=0;
  int ans = 0;
  int i = 1;
  while(cnt < n){
    tmp = i;
    num = 0;
    while (tmp % 100 == 0){
      tmp/=100;
      num++;
    }
    if (num == d) {
      cnt++;
      ans = i;
    }
    i++;
  }
  cout << ans << endl; 
}

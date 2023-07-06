/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/cf16-final/submissions/43287551
 * Submitted at: 2023-07-06 06:28:01
 * Problem URL: https://atcoder.jp/contests/cf16-final/tasks/codefestival_2016_final_b
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
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  ll ok=1e9,ng=0;
  while(ok-ng>1){
    ll mid = (ok+ng)/2;
    if(mid*(mid+1)/2 >= n) ok = mid;
    else ng = mid;
  }
  while(n){
    if(n>=ok){
      cout << ok << endl;
      n -= ok;
    }
    --ok;
  }
  return 0;
}
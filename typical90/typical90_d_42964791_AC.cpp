/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42964791
 * Submitted at: 2023-06-25 14:26:10
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_d
 * Result: AC
 * Execution Time: 765 ms
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
  vector<vector<int>> a(h,vector<int>(w));
  rep(i,h)rep(j,w) cin>>a[i][j];
  vector<int> row(h),col(w);
  rep(i,h)rep(j,w){
    row[i]+=a[i][j];
    col[j]+=a[i][j];
  }
  rep(i,h){
    rep(j,w){
      cout<<row[i]+col[j]-a[i][j]<<" ";
    }
    cout<<endl;
  }
}

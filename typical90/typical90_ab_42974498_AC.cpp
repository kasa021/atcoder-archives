/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42974498
 * Submitted at: 2023-06-26 05:49:38
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ab
 * Result: AC
 * Execution Time: 222 ms
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
  vector<vector<int>> grid(1009,vector<int> (1009,0));
  rep(i,n){
    int lx,ly,rx,ry;
    cin>>lx>>ly>>rx>>ry;
    grid[lx][ly]++;
    grid[lx][ry]--;
    grid[rx][ly]--;
    grid[rx][ry]++;
  }
  rep(i,1001)rep(j,1001)grid[i][j + 1] += grid[i][j];
  rep(i,1001)rep(j,1001)grid[i + 1][j] += grid[i][j];
  // rep(i,10){
  //   rep(j,10)cout<<grid[i][j]<<" ";
  //   cout<<endl;
  // }


  vector<int> ans(n + 1,0);
  rep(i,1009)rep(j,1009)ans[grid[i][j]]++;
  rep1(i,1,n + 1)cout<<ans[i]<<endl;
  return 0;
}
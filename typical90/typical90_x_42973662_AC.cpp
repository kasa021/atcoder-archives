/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42973662
 * Submitted at: 2023-06-26 05:12:51
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_x
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
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  ll sum = 0;
  rep(i, n) sum += abs(a[i] - b[i]);
  if(sum >k)cout<<"No"<<endl;
  else if((k-sum)%2==0)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
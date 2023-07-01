/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc041/submissions/43078897
 * Submitted at: 2023-07-01 05:25:39
 * Problem URL: https://atcoder.jp/contests/agc041/tasks/agc041_a
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  ll n, a, b;
  cin>>n>>a>>b;
  if((b-a)%2==0) cout<<(b-a)/2<<endl;
  else cout<<min(a-1, n-b) + 1 + (b-a-1)/2<<endl;
  return 0;
}

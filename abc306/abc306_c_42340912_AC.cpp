/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc306/submissions/42340912
 * Submitted at: 2023-06-17 12:21:45
 * Problem URL: https://atcoder.jp/contests/abc306/tasks/abc306_c
 * Result: AC
 * Execution Time: 214 ms
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
  vector<int> a(3*n);
  rep(i,3*n) cin>>a[i], a[i]--;
  vector<P> ans(n);
  vector<int> cnt(n+1);
  rep(i,3*n){
    cnt[a[i]]++;
    if (cnt[a[i]] == 2) ans[a[i]] = P(i, a[i]);
  }
  sort(all(ans));
  rep(i,n){
    cout << ans[i].second+1 << endl;
  }
}
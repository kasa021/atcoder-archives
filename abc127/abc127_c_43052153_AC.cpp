/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc127/submissions/43052153
 * Submitted at: 2023-06-29 15:42:21
 * Problem URL: https://atcoder.jp/contests/abc127/tasks/abc127_c
 * Result: AC
 * Execution Time: 49 ms
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
  int n, m;
  cin >> n >> m;
  vector<int> a(n+9);
  rep(i,m){
    int l, r;
    cin>>l>>r;
    l--, r--;
    a[l]++;
    a[r+1]--;
  }
  rep(i,n){
    a[i+1] += a[i];
  }
  int ans = 0;
  rep(i,n+1){
    if(a[i] == m) ans++;
  }
  cout << ans << endl;
}
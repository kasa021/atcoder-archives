/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc162/submissions/42719122
 * Submitted at: 2023-06-18 12:16:38
 * Problem URL: https://atcoder.jp/contests/arc162/tasks/arc162_a
 * Result: WA
 * Execution Time: 3 ms
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
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = 0,zero=0;
    rep(i,n){
        if(i+1-a[i]>0) ans++;
        if(i+1-a[i]==0) zero++;
    }
    // cout << endl;
    if(zero==n) cout<< n << endl;
    else cout << ans << endl;
  }
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc027/submissions/43051062
 * Submitted at: 2023-06-29 14:27:26
 * Problem URL: https://atcoder.jp/contests/agc027/tasks/agc027_a
 * Result: AC
 * Execution Time: 5 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(all(a));
  int ans = 0;
  rep(i,n){
    if(k>=a[i]){
      k-=a[i];
      ans++;
    }else {
      cout<<ans<<endl;
      return 0;
    }
  }

  if(k==0) cout<<ans<<endl;
  else cout<<ans-1<<endl;

}
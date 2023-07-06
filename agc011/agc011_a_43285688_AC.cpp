/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc011/submissions/43285688
 * Submitted at: 2023-07-06 04:50:39
 * Problem URL: https://atcoder.jp/contests/agc011/tasks/agc011_a
 * Result: AC
 * Execution Time: 48 ms
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
  int n, c, k;
  cin>>n>>c>>k;
  vector<int> t(n);
  rep(i,n) cin>>t[i];
  sort(all(t));
  int ans = 0;
  int cnt = 0;
  int start = 0;

  rep(i,n){
    if(cnt == 0){
      start = t[i];
      cnt++;
    }else{
      if(t[i] - start <= k && cnt < c){
        cnt++;
      }else{
        ans++;
        cnt = 1;
        start = t[i];
      }
    }
  }
  if(cnt > 0) ans++;
  cout << ans << endl;
}
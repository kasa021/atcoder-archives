/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43409577
 * Submitted at: 2023-07-09 06:46:23
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ah
 * Result: AC
 * Execution Time: 55 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  // 座標圧縮
  vector<int> b = a;
  sort(all(b));
  b.erase(unique(all(b)), b.end());
  rep(i,n){
    auto itr = lower_bound(all(b), a[i]);
    a[i] = distance(b.begin(), itr);
  }

  // しゃくとり法
  int ans = 0, kinds=0;
  vector<int> cnt(n, 0);
  int right = 0;
  rep(left,n){
    while(right <n && (kinds < k || cnt[a[right]] > 0)){
      if(cnt[a[right]] == 0) kinds++;
      cnt[a[right]]++;
      right++;
    }
    ans = max(ans, right - left);
    if(right == left) right++;
    else{
      cnt[a[left]]--;
      if(cnt[a[left]] == 0) kinds--;
    }
  }
  cout << ans << endl;
}

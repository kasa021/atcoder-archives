/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43179844
 * Submitted at: 2023-07-02 08:53:40
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_f
 * Result: AC
 * Execution Time: 338 ms
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

struct coupon {
  ll discount;
  ll list_price;
};

int
  main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> p(n), l(m), d(m);
  vector<coupon> c(m);
  rep(i, n) cin >> p[i];
  rep(i, m) cin >> l[i];
  rep(i, m) cin >> d[i];
  rep(i, m) c[i] = { d[i], l[i] };
  sort(all(c), [](coupon a, coupon b) {
    return a.discount > b.discount;
  });

  sort(all(p));
  multiset<ll> st;
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  rep(i, n) st.insert(p[i]);
  rep(i, m) {
    auto itr = st.lower_bound(c[i].list_price);
    if (itr != st.end()) {
      ll price = *itr;
      st.erase(st.find(price));
      pq.push(price - c[i].discount);
    }
  }
  for (auto x : st) pq.push(x);
  ll ans = 0;
  rep(i, n) ans += pq.top(), pq.pop();
  cout << ans << endl;
}
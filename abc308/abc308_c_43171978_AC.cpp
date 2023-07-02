/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43171978
 * Submitted at: 2023-07-02 03:51:48
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_c
 * Result: AC
 * Execution Time: 422 ms
 */

#include <bits/stdc++.h>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<ll,ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<int>>;

int main() {
  ll n;
  cin >> n;
  vector<T> v(n);
  rep(i,n){
    ll a, b;
    cin>>a>>b;
    v[i] = T(a, a+b, i);
  }
  sort(all(v), [](T a, T b) {
    auto [a1,b1,i1] = a;
    auto [a2,b2,i2] = b;
    if(a1*b2 == b1*a2) return i1<i2;
    return a1*b2 > b1*a2;
  });
  rep(i, n) {
    cout << get<2>(v[i])+1 << endl;
  }
  return 0;
}
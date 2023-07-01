/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/43077787
 * Submitted at: 2023-07-01 04:13:35
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_c
 * Result: AC
 * Execution Time: 43 ms
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
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i,n) cin>>h[i];
  int now = h[0];
  rep1(i,1,n){
    if(now > h[i]){
      cout << "No" << endl;
      return 0;
    }
    if(now < h[i]) now = h[i]-1;
  }
  cout << "Yes" << endl;
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43343797
 * Submitted at: 2023-07-08 12:05:51
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_a
 * Result: WA
 * Execution Time: 8 ms
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
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  int a, b;
  cin >> a >> b;
  if(abs(a-b) == 1){
    if (min(a, b) == 3 || min(a, b) == 6) cout << "No" << endl;
    else cout << "Yes" << endl;
  }else if(abs(a-b) == 3) {
    cout << "Yes" << endl;
  }
  else cout<<"No"<<endl;
}

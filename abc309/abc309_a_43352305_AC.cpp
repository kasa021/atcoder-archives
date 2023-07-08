/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43352305
 * Submitted at: 2023-07-08 12:16:00
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_a
 * Result: AC
 * Execution Time: 12 ms
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
  if(b-a==1){
    if(a==3 || a==6){
      cout << "No" << endl;
    }else{
      cout << "Yes" << endl;
    }
  }else {
    cout << "No" << endl;
  }
}

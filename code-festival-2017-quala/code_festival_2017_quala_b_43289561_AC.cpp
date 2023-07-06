/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/code-festival-2017-quala/submissions/43289561
 * Submitted at: 2023-07-06 07:50:44
 * Problem URL: https://atcoder.jp/contests/code-festival-2017-quala/tasks/code_festival_2017_quala_b
 * Result: AC
 * Execution Time: 7 ms
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
  ll n,m,k;
  cin>>n>>m>>k;
  rep(i,n+1){
    rep(j,m+1){
      if(i*m+j*n-2*i*j == k){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;

  return 0;
}
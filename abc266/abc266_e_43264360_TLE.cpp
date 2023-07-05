/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/43264360
 * Submitted at: 2023-07-05 05:20:58
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_e
 * Result: TLE
 * Execution Time: 2205 ms
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
  int n;
  cin>>n;
  vector<double>  ans(n+1, 0);

  auto f = [&](auto f, int i) {
    if(i==0) return 0.0;
    double res=0;
    rep(j,6){
      res += max((double)j+1,f(f,i-1))/6.0;
    }
    return ans[i]=res;
  };
  cout << fixed << setprecision(10);
  cout<<f(f,n)<<endl;
}

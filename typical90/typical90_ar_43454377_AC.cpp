/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43454377
 * Submitted at: 2023-07-10 07:56:15
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ar
 * Result: AC
 * Execution Time: 412 ms
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
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i,n) cin>>a[i];

  int shift = 0;
  rep(i,q){
    int t, x, y;
    cin>>t>>x>>y;
    if(t==1){
      swap(a[(x-1-shift+n)%n], a[(y-1-shift+n)%n]);
    }else if(t==2){
      shift = (shift+1)%n;
    }else{
      cout<<a[(x-1-shift+n)%n]<<endl;
    }
  }
  return 0;
}

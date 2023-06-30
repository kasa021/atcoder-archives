/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc004/submissions/43070299
 * Submitted at: 2023-06-30 14:19:57
 * Problem URL: https://atcoder.jp/contests/agc004/tasks/agc004_a
 * Result: AC
 * Execution Time: 8 ms
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
  ll a, b, c;
  cin>>a>>b>>c;
  if(a % 2==0 || b%2 ==0 || c%2 == 0){
    cout<<0<<endl;
  }else {
    cout<<min(a*b, min(b*c, c*a))<<endl;
  }
  return 0;
}

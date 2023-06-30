/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc093/submissions/43067080
 * Submitted at: 2023-06-30 11:59:33
 * Problem URL: https://atcoder.jp/contests/abc093/tasks/abc093_b
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
  int a, b, k;
  cin>>a>>b>>k;
  vector<int> ans;
  rep1(i,a,k+a){
    if(i<=b) ans.push_back(i);
  }
  rep1(i,b-k+1,b+1){
    if(i>=a) ans.push_back(i);
  }
  sort(all(ans));
  ans.erase(unique(all(ans)), ans.end());
  for(auto x:ans) cout << x << endl;
  return 0;
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc032/submissions/43285943
 * Submitted at: 2023-07-06 05:06:09
 * Problem URL: https://atcoder.jp/contests/agc032/tasks/agc032_a
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
  int n;
  cin >> n;
  vector<int> b(n);
  rep(i,n) cin >> b[i];
  vector<int> ans;

  while(b.size() > 0){
    bool ok = false;
    for(int i = b.size()-1; i >= 0; i--){
      if(b[i] == i+1){
        ans.push_back(b[i]);
        b.erase(b.begin()+i);
        ok = true;
        break;
      }
    }
    if(!ok){
      cout << -1 << endl;
      return 0;
    }
  }
  reverse(all(ans));
  rep(i,n) cout << ans[i] << endl;
  return 0;
}
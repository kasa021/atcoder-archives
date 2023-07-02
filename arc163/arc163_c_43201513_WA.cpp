/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc163/submissions/43201513
 * Submitted at: 2023-07-02 14:00:00
 * Problem URL: https://atcoder.jp/contests/arc163/tasks/arc163_c
 * Result: WA
 * Execution Time: 35 ms
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
  int t;
  cin >> t;
  vector<vector<int>> ans(509);
  ans[1].push_back(1);
  ans[3].push_back(2);
  ans[3].push_back(3);
  ans[3].push_back(6);
  rep1(i, 4, 501) {
    bool ok = false;
    for (auto x : ans[i - 1]) {
      // cout<<i<<" "<<x<<endl;
      bool itr = binary_search(all(ans[i-1]), x * (x + 1));
      bool itr2 = binary_search(all(ans[i-1]), (x + 1));
      if(!itr && !itr2) {
        for (auto y : ans[i-1]) {
          if (x != y) ans[i].push_back(y);
        }
        ans[i].push_back(x * (x + 1));
        ans[i].push_back(x + 1);
        ok = true;
      }
      if (ok) break;
    }
  }
  // rep1(i,1,6) {
  //   for (auto x : ans[i]) cout << x << " ";
  //   cout << endl;
  // }

  rep(i, t) {
    int n;
    cin >> n;
    if(n==2){
      cout<<"No"<<endl;
    }else {
      cout<<"Yes"<<endl;
      for(auto x:ans[n]) cout<<x<<" ";
      cout<<endl;
    }
  }
}

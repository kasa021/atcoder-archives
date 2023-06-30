/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc118/submissions/43063586
 * Submitted at: 2023-06-30 08:19:59
 * Problem URL: https://atcoder.jp/contests/abc118/tasks/abc118_b
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int) (n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int main() {
  int n, m;
  cin >> n >> m;
  vector<bool> b(m, true);
  rep(i,n){
    int k;
    cin >> k;
    vector<bool> a(m, false);
    rep(j,k){
      int s;
      cin >> s;
      a[s-1] = true;
    }
    rep(j,m){
      if(!a[j]) b[j] = false;
    }
  }
  int ans = 0;
  rep(i,m){
    if(b[i]) ans++;
  }
  cout << ans << endl;
}

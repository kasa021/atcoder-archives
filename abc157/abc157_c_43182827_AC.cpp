/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/43182827
 * Submitted at: 2023-07-02 10:58:03
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_c
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<char> ans(n, '-');
  rep(i,m){
    int s;
    char c;
    cin >> s >> c;
    s--;
    // s桁目をcにする
    if(ans[s] == '-' || ans[s] == c){
      ans[s] = c;
    }else{
      // すでに違う数字が入っているとき
      cout << -1 << endl;
      return 0;
    }
  }
  // 先頭が0のときかつ、２桁以上のとき
  if(ans[0] == '0' && n != 1){
    cout << -1 << endl;
    return 0;
  }
  // 先頭が-のとき
  if(ans[0] == '-' && n != 1){
    ans[0] = '1';
  }
  // -のところを0にする
  rep1(i,0,n){
    if(ans[i] == '-'){
      ans[i] = '0';
    }
  }
  rep(i,n){
    cout << ans[i];
  }
  cout << endl;
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42933690
 * Submitted at: 2023-06-24 14:38:16
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_d
 * Result: AC
 * Execution Time: 14 ms
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
  string s;
  cin >> n >> s;

  string ans = "";
  int cnt = 0;
  rep(i,n){
    if (s[i] == '(') cnt++;
    if(s[i] == ')'){
      if(cnt ==0) {
        ans += s[i];
        continue;
      }
      cnt--;
      while(ans.back() != '('){
        ans.pop_back();
      }
      ans.pop_back();
    }else {
      ans += s[i];
    }
  }
  cout << ans << endl;
}
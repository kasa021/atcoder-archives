/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc104/submissions/43067461
 * Submitted at: 2023-06-30 12:16:21
 * Problem URL: https://atcoder.jp/contests/abc104/tasks/abc104_b
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
  string s;
  cin >> s;
  int cnt = 0;
  bool a = false, c = false, e = true;
  if(s[0]=='A') a=true;
  rep1(i,2,s.size()-1){
    if(s[i]=='C') c=true, cnt++;
  }
  if(cnt != 1) c=false;

  rep1(i,1,s.size()){
    if(s[i] == 'C') continue;
    if(s[i] < 'a' || s[i] > 'z') e=false;
  }

  if(a && c && e) cout << "AC" << endl;
  else cout << "WA" << endl;
}

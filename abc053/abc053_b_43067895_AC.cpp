/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc053/submissions/43067895
 * Submitted at: 2023-06-30 12:35:21
 * Problem URL: https://atcoder.jp/contests/abc053/tasks/abc053_b
 * Result: AC
 * Execution Time: 12 ms
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
  int n = s.size();
  int a=-1,z=0;
  rep(i,n){
    if(s[i]=='A'){
      a=i;
      break;
    }
  }
  for(int i=n-1;i>=0;i--){
    if(s[i]=='Z'){
      z=i;
      break;
    }
  }
  cout << z-a+1 << endl;
}

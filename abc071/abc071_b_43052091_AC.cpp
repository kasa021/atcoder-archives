/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc071/submissions/43052091
 * Submitted at: 2023-06-29 15:38:00
 * Problem URL: https://atcoder.jp/contests/abc071/tasks/abc071_b
 * Result: AC
 * Execution Time: 10 ms
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
  cin>>s;
  int n = s.size();
  vector<int> cnt(26, 0);
  rep(i, n) {
    cnt[s[i] - 'a']++;
  }
  rep(i,26){
    if(cnt[i] ==0){
      cout<<char('a' + i)<<endl;
      return 0;
    }
  }
  cout<<"None"<<endl;
}
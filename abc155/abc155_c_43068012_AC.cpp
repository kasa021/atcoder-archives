/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc155/submissions/43068012
 * Submitted at: 2023-06-30 12:40:52
 * Problem URL: https://atcoder.jp/contests/abc155/tasks/abc155_c
 * Result: AC
 * Execution Time: 520 ms
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
  cin>>n;
  map<string,int> mp;
  rep(i,n){
    string s;
    cin>>s;
    mp[s]++;
  }

  int mx = 0;
  for(auto p : mp){
    mx = max(mx, p.second);
  }
  vector<string> ans;
  for(auto p : mp){
    if(p.second == mx) ans.push_back(p.first);
  }
  sort(all(ans));
  for(auto s : ans){
    cout << s << endl;
  }
}

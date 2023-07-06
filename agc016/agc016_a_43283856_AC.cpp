/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc016/submissions/43283856
 * Submitted at: 2023-07-06 03:03:13
 * Problem URL: https://atcoder.jp/contests/agc016/tasks/agc016_a
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
  cin>>s;
  int ans = 1e9;
  rep(i,26){
    char c='a'+i;
    int cnt = 0;
    string t = s;
    while(true){
      bool ok =true;
      rep(j,t.size()){
        if(t[j] != c) ok = false;
      }
      if(ok) break;
      string u = "";
      rep(j,t.size()-1){
        if(t[j] == c || t[j+1] == c) u += c;
        else u += t[j];
      }
      t = u;
      cnt++;
    }
    ans = min(ans,cnt);
  }
  cout << ans << endl;
}
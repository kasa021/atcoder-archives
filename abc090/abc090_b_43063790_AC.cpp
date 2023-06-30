/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc090/submissions/43063790
 * Submitted at: 2023-06-30 08:31:00
 * Problem URL: https://atcoder.jp/contests/abc090/tasks/abc090_b
 * Result: AC
 * Execution Time: 14 ms
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
  int a, b;
  cin >> a >> b;
  int ans = 0;
  rep1(i,a,b+1){
    string s = to_string(i);
    bool ok = true;
    rep(j,s.size()/2){
      if(s[j] != s[s.size()-1-j]) ok = false;
    }
    if(ok) ans++;
  }
  cout << ans << endl;
}

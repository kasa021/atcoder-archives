/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/code-festival-2017-qualb/submissions/43181160
 * Submitted at: 2023-07-02 09:38:31
 * Problem URL: https://atcoder.jp/contests/code-festival-2017-qualb/tasks/code_festival_2017_qualb_b
 * Result: AC
 * Execution Time: 384 ms
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
  int n;
  cin>>n;
  map<string, int> mp;
  rep(i,n){
    string s;
    cin>>s;
    mp[s]++;
  }

  bool ok = true;
  int m;
  cin >> m;
  rep(i,m){
    string t;
    cin >> t;
    if(!mp.count(t)) ok = false;
    else if(mp[t] == 0) ok = false;
    else mp[t]--;
  }
  cout<<(ok ? "YES" : "NO")<<endl;
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/cf17-final/submissions/43205634
 * Submitted at: 2023-07-02 16:31:03
 * Problem URL: https://atcoder.jp/contests/cf17-final/tasks/cf17_final_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  string s;
  cin >> s;
  ll n = s.size();
  set<char> st;
  vector<int> cnt(3);
  rep(i, n) {
    st.insert(s[i]);
    cnt[s[i] - 'a']++;
  }
  if(n==1){
    cout<<"YES"<<endl;
  }else if(n==2){
    if(st.size()==1){
      cout<<"NO"<<endl;
    }else {
      cout<<"YES"<<endl;
    }
  }else {
    vector<int> diff(3);
    rep(i, 3) diff[i] = abs(cnt[i] - cnt[(i + 1) % 3]);
    if (diff[0] <= 1 && diff[1] <= 1 && diff[2] <= 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}

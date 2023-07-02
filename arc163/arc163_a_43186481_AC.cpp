/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc163/submissions/43186481
 * Submitted at: 2023-07-02 12:11:36
 * Problem URL: https://atcoder.jp/contests/arc163/tasks/arc163_a
 * Result: AC
 * Execution Time: 7 ms
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
  int t;
  cin >> t;
  rep(i,t){
    int n;
    string s;
    cin >> n >> s;
    bool ok=false;
    rep1(j,1,n){
      string prev=s.substr(0,j); // [0,j)
      string next=s.substr(j,n-j); // [j,n)
      // cout<<prev<<" "<<next<<endl;
      if(prev<next){
        cout<<"Yes"<<endl;
        ok=true;
        break;
      }
    }
    if(!ok)cout<<"No"<<endl;
  }
}

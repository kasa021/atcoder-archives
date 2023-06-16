/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/42295641
 * Submitted at: 2023-06-16 12:04:21
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_d
 * Result: AC
 * Execution Time: 287 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;

int main() {
  ll q;
  cin >> q;
  deque<P> deq;
  rep(_,q){
    ll num;
    cin >> num;
    if(num==1){
      ll x, c;
      cin >> x >> c;
      deq.push_back(make_pair(x, c));
    }else {
      ll c;
      cin >> c;
      auto itr = deq.begin();
      if((*itr).second == c){
        cout<<(*itr).first*(*itr).second<<endl;
        deq.pop_front();
      }else if((*itr).second > c){
        (*itr).second -= c;
        cout<<(*itr).first*c<<endl;
      }else{
        ll ans = 0;
        while(c > 0){
          if((*itr).second > c){
            (*itr).second -= c;
            ans += (*itr).first*c;
            c = 0;
          }else{
            ans += (*itr).first*(*itr).second;
            c -= (*itr).second;
            deq.pop_front();
            itr = deq.begin();
          }
        }
        cout << ans << endl;
      }
    }
  }
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2008ho/submissions/35830972
 * Submitted at: 2022-10-21 09:34:10
 * Problem URL: https://atcoder.jp/contests/joi2008ho/tasks/joi2008ho_c
 * Result: AC
 * Execution Time: 119 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      int n,m;
      cin>>n>>m;
      vector<ll> p(n),q;
      rep(i,n) cin>>p[i];
      rep(i,n){
        q.push_back(p[i]);
        rep(j,n){
          q.push_back(p[i]+p[j]);
        }
      }
      sort(all(q));

      ll ans=0ll;
      for(auto t:q){
        ll s=m-t;
        auto itr=upper_bound(all(q),s);
        if(itr == q.begin()) continue;
        ans=max(ans,*(--itr)+t);
      }
      cout<< ans << endl;
    }
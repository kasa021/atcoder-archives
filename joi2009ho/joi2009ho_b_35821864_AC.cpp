/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2009ho/submissions/35821864
 * Submitted at: 2022-10-21 02:35:02
 * Problem URL: https://atcoder.jp/contests/joi2009ho/tasks/joi2009ho_b
 * Result: AC
 * Execution Time: 50 ms
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
      ll d;
      int n,m;
      ll ans=0;
      vector<ll> store;
      cin>>d>>n>>m;
      store.push_back(0);
      store.push_back(d);
      rep(i,n-1){
        ll t;
        cin>>t;
        store.push_back(t);
      }
      sort(all(store));
      
      rep(i,m){
        int k;
        cin>>k;
        int  s=lower_bound(all(store),k)-store.begin();
        //cout<< *s <<" "<<*(s-1)<< endl;
        ans+=min(abs(store[s]-k),abs(store[s-1]-k));
      }
      cout<< ans << endl;
    }
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/joi2009ho/submissions/35821679
 * Submitted at: 2022-10-21 02:26:26
 * Problem URL: https://atcoder.jp/contests/joi2009ho/tasks/joi2009ho_b
 * Result: WA
 * Execution Time: 44 ms
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
      int d,n,m;
      int  ans=0;
      vector<int> store,home(m,0);
      cin>>d>>n>>m;
      store.push_back(0);
      store.push_back(d);
      rep1(i,2,n+1){
       int  t;
        cin>>t;
        store.push_back(t);
      }
      sort(all(store));
      rep(i,m) cin>>home[i];
      rep(i,m){
        auto s=lower_bound(all(store),home[i]);
        //cout<< *s <<" "<<*(s-1)<< endl;
        ans+=min(abs(*s-home[i]),abs(*(s-1)-home[i]));
      }
      cout<< ans << endl;
    }
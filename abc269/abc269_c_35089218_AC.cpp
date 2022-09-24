/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/35089218
 * Submitted at: 2022-09-24 10:09:47
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_c
 * Result: AC
 * Execution Time: 65 ms
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

ll nijou(ll a){
    ll ans=1;
    while(a--){
        ans*=2;
    }
    return ans;
}

int main(){
      ll n,size;
      cin>>n;
      vector<bool> p(60,false);
      vector<ll> ni;
      rep(i,60){ //nの二進数時の１となる位
        if(n&(1ll<<i) ) p[i]=true;
      }
      rep(i,60){
        if(p[i]) ni.push_back(nijou(i));
      }

      size=ni.size();
      for(ll i=0;i<(1<<size);i++){
        ll ans=0;
        for(ll j=0;j<size;j++){
            if(i&(1<<j)) ans+=ni[j];
        }
        cout<<ans<<endl;
      }
     
    }
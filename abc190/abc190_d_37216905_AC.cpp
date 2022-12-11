/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc190/submissions/37216905
 * Submitted at: 2022-12-11 11:35:49
 * Problem URL: https://atcoder.jp/contests/abc190/tasks/abc190_d
 * Result: AC
 * Execution Time: 22 ms
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
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;
//typedef modll1000000007 mll;

vector<ll> enum_div(ll n){
    vector<ll> res;
res.push_back(1);
res.push_back(n);
    for(ll i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            res.push_back(i);
            if(i*i != n){
                res.push_back(n/i);
           }
       }
   }
return res;
}
int main(){
      ll n;
      cin>>n;
      vector<ll> ans=enum_div(2*n);
      ll answer=0;
      for(ll v:ans){
        
        if(abs((2*n)/v-v)%2==1) answer++;
      }
      cout<< answer << endl;
    }

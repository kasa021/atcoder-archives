/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/41465773
 * Submitted at: 2023-05-16 15:08:24
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_c
 * Result: AC
 * Execution Time: 110 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;

int main(){
      ll n,cnt=0,same=0,not_same=0;
      cin>>n;
      vector<ll> a(n);
      rep(i,n){
        cin>>a[i];
        a[i]--;
        if(i==a[i]) cnt++;
      }
      ll ans=0;
      rep(i,n){
        if(a[i]==i) same+=cnt-1;
        else {
            if(a[a[i]]==i) not_same++;
        }
      }
      cout<< same/2+not_same/2 << endl;
    }
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/37114994
 * Submitted at: 2022-12-09 13:31:59
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_d
 * Result: AC
 * Execution Time: 78 ms
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
//typedef modint1000000007 mint;
int main(){
      ll n,ans=0;
      cin>>n;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      sort(all(a));
      //rep(i,n) cout<<a[i]<<" ";
      cout<<endl;
      rep(j,n){
        auto p=distance(a.begin(),lower_bound(all(a),a[j]));
        auto q=distance(lower_bound(all(a),a[j]+1),a.end());
        //cout<<p<<" "<<q<<endl;
        ans+=p*q;
      }
      cout<< ans << endl;
    }

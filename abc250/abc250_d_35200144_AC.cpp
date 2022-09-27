/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/35200144
 * Submitted at: 2022-09-27 13:10:21
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_d
 * Result: AC
 * Execution Time: 24 ms
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
      const int m=1e6;
      vector<bool> isp(m+1,true);
      vector<int> primes;
      isp[0]=isp[1]=false;
      for(int i=2;i<=m;i++){
        if(!isp[i]) continue;
        primes.push_back(i);
        for(ll j=(ll)i*i;j<=m;j+=i ){
          isp[j]=false;
        }
      }

      vector<int> s(m+1);
      for(int p: primes) s[p]=1;
      rep(i,m) s[i+1] += s[i];

      ll n;
      cin>>n;
      ll ans=0;

      for(int q:primes){
        int r=min<ll>(n/q/q/q,q-1);
          ans+=s[r];
      }
      cout<< ans << endl;
      }
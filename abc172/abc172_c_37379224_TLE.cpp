/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc172/submissions/37379224
 * Submitted at: 2022-12-18 12:32:53
 * Problem URL: https://atcoder.jp/contests/abc172/tasks/abc172_c
 * Result: TLE
 * Execution Time: 2206 ms
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
      ll n,k,m,idxa=0,idxb=0;
      cin>>n>>m>>k;
      vector<ll> a(n+9,1e9+9),b(m+9,1e9+9);
      vector<ll> csa(n + 9),csb(m+9);
      rep(i,n)cin>>a[i];
      rep(i,m) cin>>b[i];
      csa[0] = 0;
      for (int i = 0; i < n; i++)
          csa[i + 1] = csa[i] + a[i];
      csb[0] = 0;
      for (int i = 0; i < m; i++)
          csb[i + 1] = csb[i] + b[i];

      ll ans=0,j=0;
      rep(i,n+1){
        if(csa[i]>k) break;
        else {
            j=m;
            while(csb[j]>k-csa[i]){
                j--;
            }
            ans=max(ans,i+j);
        }
      }
      cout<< ans << endl;


      
    }
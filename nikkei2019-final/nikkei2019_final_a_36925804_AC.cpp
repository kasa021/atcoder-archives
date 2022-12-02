/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/nikkei2019-final/submissions/36925804
 * Submitted at: 2022-12-02 07:57:53
 * Problem URL: https://atcoder.jp/contests/nikkei2019-final/tasks/nikkei2019_final_a
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
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//using mint = modint1000000007;
int main(){
      int n;
      cin>>n;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      vector<ll> csa(n + 1);
      csa[0] = 0;
      for (int i = 0; i < n; i++)
          csa[i + 1] = csa[i] + a[i];
        
      rep(i,n){
        ll mx=0;
        rep1(j,1,n+1){
            mx=max(mx,csa[j]-csa[j-i-1]);
        }
        cout<< mx << endl;
      }
      
    }
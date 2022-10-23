/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/35927947
 * Submitted at: 2022-10-23 17:03:59
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_d
 * Result: RE
 * Execution Time: 2420 ms
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
      int n;
      cin>>n;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      vector<vector<int>> dp(n+9,vector<int>(n+9,0));
      rep1(i,1,n+1){
        rep1(j,1,n+1){
            dp[j][i]=dp[j][i-1];
            if(a[i-1]==j) dp[j][i]++; 
        }
      }
      int q;
      cin>>q;
      rep(i,q){
        int l,r,x;
        cin>>l>>r>>x;
        cout<< dp[x][r]-dp[x][l-1] << endl;
      }
      
    }
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/36383826
 * Submitted at: 2022-11-11 12:01:46
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_b
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
      int n,k;
      cin>>n>>k;
      vector<int> h(n),dp(n+9,INT_MAX);
      dp[0]=0;
      rep(i,n) cin>>h[i];
      rep(i,n){
        //cout<<i<<endl;
        rep1(j,1,k+1){
            if(i+j<n) dp[i+j]=min(dp[i+j],abs(h[i+j]-h[i])+dp[i]);
            //cout<< "dp["<<i+j<<"] "<< dp[i+j]<< endl;
        }
      }
      cout<< dp[n-1] << endl;
    }
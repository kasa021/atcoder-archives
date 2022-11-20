/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/36661377
 * Submitted at: 2022-11-20 06:16:20
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cv
 * Result: AC
 * Execution Time: 45 ms
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
      vector<int> x(19),y(19);
      vector<vector<double>> dp((1<<16),vector<double>(19,1e9));
      cin>>n;
      rep(i,n) cin>>x[i]>>y[i];
      
      dp[0][0]=0;
      rep(i,(1<<n)){
        rep(j,n){
            if(dp[i][j]>=1e9) continue;
            rep(k,n){
                if((i/(1<<k))%2==1) continue;
                double dist=sqrt(1.0*(x[j]-x[k])*(x[j]-x[k])+1.0*(y[j]-y[k])*(y[j]-y[k]));
                dp[i+(1<<k)][k]=min(dp[i+(1<<k)][k],dp[i][j]+dist);
            }
        }
      }
      cout<<fixed<< setprecision(10) << dp[(1<<n)-1][0] << endl;
    }
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35046165
 * Submitted at: 2022-09-22 09:42:25
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_cs
 * Result: AC
 * Execution Time: 32 ms
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
      string s,t;
      cin>>s>>t;
      int sizes=s.size(),sizet=t.size();
      vector<vector<int>> dp((int)s.size()+1,vector<int>((int)t.size()+1,0));
      rep1(i,1,sizes+1) dp[i][0]=i;
      rep1(i,1,sizet+1) dp[0][i]=i;
      rep1(i,1,sizes+1){
        rep1(j,1,sizet+1){
            if(s[i-1]==t[j-1]) dp[i][j]=min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]});
            else dp[i][j]=min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+1});
        }
      }
      cout<< dp[sizes][sizet] << endl;
    //   rep(i,sizes+1){
    //     rep(j,sizet+1){
    //         cout<< dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    //   }
    }

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35045626
 * Submitted at: 2022-09-22 09:08:48
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_t
 * Result: AC
 * Execution Time: 31 ms
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
      vector<vector<int>> dp(sizes+9,vector<int>(sizet+9,0));
      rep1(i,1,sizes+1){
        rep1(j,1,sizet+1){
            if(s[i-1]==t[j-1]){
                dp[i][j]=max({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]+1});
            }else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
      }
      cout<< dp[sizes][sizet] << endl;
    }
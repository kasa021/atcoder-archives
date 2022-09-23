/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35067544
 * Submitted at: 2022-09-23 12:53:44
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_af
 * Result: AC
 * Execution Time: 8 ms
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
      int n,a,b;
      cin>>n>>a>>b;
      vector<bool> dp(n+1,false);

      rep(i,n+1){
        if(i>=a&&dp[i-a]==false) dp[i]=true;
        else if(i>=b&&dp[i-b]==false) dp[i]=true;
      }
      if(dp[n]) cout<< "First" << endl;
      else cout<< "Second" << endl;
    }
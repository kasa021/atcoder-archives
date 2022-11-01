/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/36143299
 * Submitted at: 2022-11-01 15:52:28
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_d
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

int main(){
      int n,m;
      cin>>n>>m;
      vector<int> a(n),b(n);
      rep(i,n) cin>>a[i]>>b[i];
      
      vector<vector<bool>> dp(10009,vector<bool>(10009,false));
      dp[0][0]=true;
      rep(i,n){
        rep(j,m+1){
            if(dp[i][j]){
                if(j+a[i]<=m){
                    dp[i+1][j+a[i]]=true;
                }
                if(j+b[i]<=m){
                    dp[i+1][j+b[i]]=true;
                }
            }
        }
      } 

      if(dp[n][m]){
        cout<< "Yes" << endl;
        string t(n,'H');
        for(int i=n-1;i>=0;i--){
            if(m>=a[i] && dp[i][m-a[i]]){
                t[i]='H';
                m-=a[i];
            }else {
                t[i]='T';
                m-=b[i];
            }
        }
        cout<< t << endl;
      }else {
        cout<< "No" << endl;
      }
    }

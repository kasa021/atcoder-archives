/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/36388934
 * Submitted at: 2022-11-11 16:01:53
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_f
 * Result: AC
 * Execution Time: 60 ms
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
      vector<vector<int>> dp(3009,vector<int>(3009,0));
      rep1(i,1,(int)s.size()+1){
        rep1(j,1,(int)t.size()+1){
            //cout<< s[i-1]<<" "<<t[j-1] << endl;
            if(s[i-1]==t[j-1]) {
                dp[i][j]=dp[i-1][j-1]+1;
                //cout<< dp[i][j] << endl;
            }
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
      }

    //   rep(k,s.size()+1){
    //     rep(l,t.size()+1){
    //         cout<< dp[k][l] << " ";
    //     }cout<<endl;
    //   }

      string ans;
      int i=(int)s.size(),j=(int)t.size();
      while(dp[i][j]>0){
        //cout<< i<<" "<<j << endl;
        if(s[i-1]==t[j-1]){
            ans+=s[i-1];
            i--;
            j--;
        }else {
            if(dp[i][j]==dp[i-1][j]){
                i--;
            }else{
                j--;
            }
        }
      }
      reverse(all(ans));
      cout<< ans << endl;
    }
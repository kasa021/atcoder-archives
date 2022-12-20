/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/37411684
 * Submitted at: 2022-12-20 12:47:46
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_d
 * Result: AC
 * Execution Time: 20 ms
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
    int n,sum=0;
    cin>>n;
    vector<int> t(n);
    rep(i,n){
        cin>>t[i];
        sum+=t[i];
    }
    vector<vector<bool>> dp(n+9,vector<bool>(sum+9,false));
    dp[0][0]=true;
    rep(i,n){
        rep(j,sum+1){
            if(dp[i][j]){
                dp[i+1][j]=true;
                dp[i+1][j+t[i]]=true;
            }
        }
    }
    rep1(i,(sum+1)/2,sum+1){
        rep(j,n+1){
            if(dp[j][i]){
                cout<< i << endl;
                return 0;
            }
        }
    }
    // cout<<"  ";
    // rep(i,sum+1) cout<< i%10 <<" ";
    // cout<<endl;
    // rep(i,n){
    //     cout<< i <<" ";
    //     rep(j,sum+1){
    //         cout<< dp[i][j] <<" ";
    //     }cout << endl;
    // }
    }

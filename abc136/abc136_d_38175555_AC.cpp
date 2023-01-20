/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/38175555
 * Submitted at: 2023-01-20 15:21:53
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_d
 * Result: AC
 * Execution Time: 53 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    string s;
    cin>>s;
    int size=s.size();
    vector<vector<int>> dp(109,vector<int>(100009,0));
    rep(i,size){
        if(s[i]=='R') dp[0][i]=i+1;
        else dp[0][i]=i-1;
    }
    rep(k,80){
        rep(i,size){
            dp[k+1][i]=dp[k][dp[k][i]];
        }
    }
    vector<int> ans(size);
    rep(i,size) ans[dp[60][i]]++;
    rep(i,size)cout<< ans[i] << " ";
    cout<<endl;
    }

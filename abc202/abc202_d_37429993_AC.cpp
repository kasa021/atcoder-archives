/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc202/submissions/37429993
 * Submitted at: 2022-12-21 13:58:26
 * Problem URL: https://atcoder.jp/contests/abc202/tasks/abc202_d
 * Result: AC
 * Execution Time: 7 ms
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

vector<vector<ll>> dp(39,vector<ll>(39,0));
ll a,b,k;
string find_s(ll a,ll b,ll k){
    if(a==0){
        return string(b,'b');//b個のbを返す
    }
    if(b==0) return string(a,'a');
    if(k<=dp[a-1][b]){
        return string("a")+find_s(a-1,b,k);
    } else return string("b")+find_s(a,b-1,k-dp[a-1][b]);
}

int main(){
    cin>>a>>b>>k;
    dp[0][0]=1;
    rep(i,a+1){
        rep(j,b+1){
            if(i>0){
                dp[i][j]+=dp[i-1][j];
            }
            if(j>0){
                dp[i][j]+=dp[i][j-1];
            }
        }
    }
    cout<< find_s(a,b,k) << endl;
    }

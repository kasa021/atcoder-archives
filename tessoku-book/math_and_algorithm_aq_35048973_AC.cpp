/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35048973
 * Submitted at: 2022-09-22 12:45:13
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_aq
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

ll power(ll a,ll b,ll mod){
    ll p=a,ans=1;
    rep1(i,0,30){
        if(b&(1<<i)){
            ans=(ans*p)%mod;
        }
        p=(p*p)%mod;
    }
    return ans;
}

int main(){
      ll a,b,mod=1000000007;
      cin>>a>>b;
      cout<<power(a,b,mod)<<endl;
    }
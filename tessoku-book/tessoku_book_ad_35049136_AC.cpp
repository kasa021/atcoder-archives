/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35049136
 * Submitted at: 2022-09-22 12:54:33
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ad
 * Result: AC
 * Execution Time: 14 ms
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

ll div(ll a,ll b,ll m){
    return (a*power(b,m-2,m))%m;
}


int main(){
      ll n,r,mod=1000000007,a=1,b=1,c=1;
      cin>>n>>r;
      rep1(i,1,n+1) a=a*i%mod;
      rep1(i,1,r+1) b=b*i%mod;
      rep1(i,1,n-r+1) b=b*i%mod;
      cout<<div(a,b,mod)<<endl;
    }
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc034/submissions/36921363
 * Submitted at: 2022-12-02 02:00:59
 * Problem URL: https://atcoder.jp/contests/abc034/tasks/abc034_c
 * Result: AC
 * Execution Time: 25 ms
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

// mod. m での a の逆元 a^{-1} を計算する
long long modinv(long long a, long long m) {
long long b = m, u = 1, v = 0;
while (b) {
    long long t = a / b;
    a -= t * b; swap(a, b);
    u -= t * v; swap(u, v);
    }
u %= m;
if (u < 0) u += m;
return u;
}
ll power(ll a,ll b,ll mod){  //a^b%modを計算する
   ll p=a,ans=1;
   rep1(i,0,30){
       if(b&(1<<i)){
            ans=(ans*p)%mod;
       }
       p=(p*p)%mod;
   }
   return ans;
}

ll div(ll a,ll b,ll m){// (a/b)%modを計算する
   return (a*power(b,m-2,m))%m;
}

ll mod=1e9+7;
int main(){
      ll n,m,ans=1,now;
      cin>>n>>m;
      n--,m--;
      now=n+m;
      //cout<< ans << endl;
      while(now>max(n,m)){
        ans*=now;
        ans%=mod;
        now--;
      }
      
      now=min(n,m);
      while(now){
        ans*=modinv(now,mod);
        ans%=mod;
        now--;
      }//cout<< ans << endl;
      
      cout<< ans << endl;
    }

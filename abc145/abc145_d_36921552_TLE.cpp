/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc145/submissions/36921552
 * Submitted at: 2022-12-02 02:18:25
 * Problem URL: https://atcoder.jp/contests/abc145/tasks/abc145_d
 * Result: TLE
 * Execution Time: 2205 ms
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

ll mod=1e9+7;

int main(){
      ll x,y,n,m,now,ans=1;
      cin>>x>>y;
      if((x+y)%3){
        cout<< 0 << endl;
        return 0;
      }
      n=(2*y-x)/3;
      m=(2*x-y)/3;
      now=m+n;
      //cout<< n<<" "<<m << endl;
      if(m<0||y<0){
        cout<< "0" << endl;
        return 0;
      }
      while(now){
        ans*=now;
        ans%=mod;
        now--;
      }
      now=n;
      while(now){
        ans*=modinv(now,mod);
        ans%=mod;
        now--;
      }
      now=m;
      while(now){
        ans*=modinv(now,mod);
        ans%=mod;
        now--;
      }
      cout<< ans << endl;
    }

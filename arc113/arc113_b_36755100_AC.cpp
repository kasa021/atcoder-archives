/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc113/submissions/36755100
 * Submitted at: 2022-11-24 10:42:27
 * Problem URL: https://atcoder.jp/contests/arc113/tasks/arc113_b
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



int main(){
      ll a,b,c;
      cin>>a>>b>>c;
      vector<ll> div;
      ll now=a%10,p=a%10;
      if(now==0||now==1||now==5||now==6){
        cout<< now << endl;
        return 0;
      }
      div.push_back(now);
      while(true){
        now=now*p%10;
        bool f=true;
        for(auto v:div){
            if(v==now) f=false;
        }
        if(f) div.push_back(now);
        else break;
      }
    //   for(auto v:div) cout<< v << endl;
    //   cout<<endl;
      ll size=div.size();
      ll cnt=power(b,c,size)-1;
      if(cnt<0) cnt+=size;
      
      cout<< div[cnt] << endl;


    }
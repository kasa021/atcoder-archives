/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41048169
 * Submitted at: 2023-04-29 13:27:23
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_d
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
using ll = long long;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;



int main(){
      ll n;
      cin>>n;

      vector<bool> prime(1000009, true);
      prime[0]=prime[1]=false;
      for (ll i = 2; i * i <= 1000005; i++)
      {
          if (prime[i] == true)
          {
              for (ll j = 2 * i; j <= 1000005; j += i)
                  prime[j] = false;
          }
      }
      vector<ll> list;
      rep(i,1000009){
        if(prime[i]) list.push_back(i);
      }
      ll size=list.size(),ans=0;
    //   cout<< size << endl;
      rep(i,170){
        rep1(j,i+1,1300){
            ll a=list[i]*list[i]*list[j];
            ll b=sqrt(n/a);
            if(list[j]<b){
                ll cnt=lower_bound(all(list),b)-list.begin();
                // cout<< b << endl;
                // cout<< list[i]<<" "<<list[j] <<" "<<list[cnt]<< endl;
                if(list[cnt]>b) cnt--;
                ans+=cnt-j;
            }
        }
      }
    //   rep(i,5) cout<< list[i] << endl;
      cout<< ans << endl;
    }
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc019/submissions/36556418
 * Submitted at: 2022-11-17 12:33:41
 * Problem URL: https://atcoder.jp/contests/agc019/tasks/agc019_a
 * Result: AC
 * Execution Time: 6 ms
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
using P = pair<ll,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      ll a,b,c,d,n;
      cin>>a>>b>>c>>d>>n;

      ll ans=0;
      vector<P> mp(4);
      mp[0]=P(a*8,0);
      mp[1]=P(b*4,1);
      mp[2]=P(c*2,2);
      mp[3]=P(d,3);
      sort(all(mp));
      if(mp[0].second==3){
        if(n%2==1) ans+=(n/2)*mp[0].first+mp[1].first/2;
        else ans+=(n/2)*mp[0].first;
      }else {
        ans+=n*(mp[0].first/2);
      }
      cout<< ans << endl;
    }

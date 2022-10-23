/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/35927713
 * Submitted at: 2022-10-23 16:37:21
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_c
 * Result: WA
 * Execution Time: 85 ms
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
using P = pair<ll,char>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      ll n,cnt=0,ans=0;
      cin>>n;
      string s;
      cin>>s;
      rep(i,n){
        if(s[i]=='1') cnt++;
      }
      vector<P> p(n);
      rep(i,n){
        int w;
        cin>>w;
        p[i]=P(w,s[i]);
      }
      sort(all(p));
      //cout<< cnt << endl;
      rep(i,n){
        if(p[i].second=='1') cnt--;
        else cnt++;
        if(i!=n-1&&p[i].first==p[i+1].first) continue;
        ans=max(ans,cnt);
        //cout<< cnt << endl;
      }
      cout<< ans << endl;
    }
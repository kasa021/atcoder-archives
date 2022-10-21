/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc023/submissions/35823452
 * Submitted at: 2022-10-21 04:10:25
 * Problem URL: https://atcoder.jp/contests/abc023/tasks/abc023_d
 * Result: AC
 * Execution Time: 421 ms
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
const long long INFL = 10000000000000000;

int main(){
      int n;
      cin>>n;
      vector<ll> h(n),s(n);
      rep(i,n) cin>>h[i]>>s[i];
      ll l=-1,r=INFL;
      while(r-l>1){
        ll mid=(l+r)/2;
        vector<ll> time(n);
        bool f=true;
        rep(i,n){
            time[i]=(mid-h[i])/s[i];
        }

        sort(all(time));
        rep(i,n){
            if(i>time[i] || mid < h[i]){
                f=false;
            }
        }
        if(f){
            r=mid;
        }else {
            l=mid;
        }
        //cout<< l<<" "<<r << endl;
      }
      cout<< r << endl;
    }
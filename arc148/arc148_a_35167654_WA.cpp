/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc148/submissions/35167654
 * Submitted at: 2022-09-25 17:48:11
 * Problem URL: https://atcoder.jp/contests/arc148/tasks/arc148_a
 * Result: WA
 * Execution Time: 72 ms
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

int gcd(ll a, ll b) {
    return b ? gcd(b, a%b) : a;
}

int main(){
      ll n;
      cin>>n;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      ll g=0;
      rep(i,n-1){
        g=gcd(g,(abs(a[i+1]-a[i])));
      }
      if(g>1) cout<< "1" << endl;
      else cout<<"2"<<endl;
      //cout<<g<<endl;
    }
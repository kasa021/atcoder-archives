/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc103/submissions/36157225
 * Submitted at: 2022-11-02 11:21:53
 * Problem URL: https://atcoder.jp/contests/abc103/tasks/abc103_c
 * Result: WA
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

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int lcm(int a, int b) {
    return a/gcd(a,b)*b;
}
int main(){
      ll n;
      cin>>n;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      ll cnt=0;
      cnt=lcm(a[0],a[1]);
      
      rep1(i,2,n){
        cnt=lcm(cnt,a[i]);
      }
      cnt--;
      ll ans=0;
      rep(i,n){
        ans+=(cnt%a[i]);
      }
      cout<< ans << endl;
    }
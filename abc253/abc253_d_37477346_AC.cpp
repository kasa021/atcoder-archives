/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/37477346
 * Submitted at: 2022-12-24 10:30:00
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_d
 * Result: AC
 * Execution Time: 8 ms
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
//typedef modint1000000007 mint;
ll sum(ll n){
    return (n*(n+1))/2;
}
ll gcd(ll a, ll b) {
    return b ? gcd(b, a%b) : a;
}

int main(){
      ll n,a,b;
      cin>>n>>a>>b;
      ll ans=0;
      ans=sum(n)-a*sum(n/a)-b*sum(n/b)+(a*b/gcd(a,b))*sum(n/(a*b/gcd(a,b)));
      cout<< ans << endl;
     
    }

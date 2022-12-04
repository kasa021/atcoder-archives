/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc165/submissions/37010555
 * Submitted at: 2022-12-04 04:55:36
 * Problem URL: https://atcoder.jp/contests/abc165/tasks/abc165_d
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

ll f(ll a,ll b, ll n){
    return (a*min(b-1,n))/b-a*(min(b-1,n)/b);
}
int main(){
      ll a,b,n,ans=0;
      cin>>a>>b>>n;
      cout<< f(a,b,n) << endl;
    }

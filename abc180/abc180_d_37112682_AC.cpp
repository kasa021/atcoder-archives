/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc180/submissions/37112682
 * Submitted at: 2022-12-09 11:46:33
 * Problem URL: https://atcoder.jp/contests/abc180/tasks/abc180_d
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


int main(){
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    ll p=x+b,q=x*a,now=0,ans=0;
   while((double)a*x<y && a*x<=x+b){
    x*=a;
    ans++;
   }
    
    cout<< ans +(y-1-x)/b<<endl;
    }

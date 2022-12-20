/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc133/submissions/37410716
 * Submitted at: 2022-12-20 12:02:02
 * Problem URL: https://atcoder.jp/contests/abc133/tasks/abc133_d
 * Result: AC
 * Execution Time: 187 ms
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
     ll n,sum=0;
     cin>>n;
     vector<ll> a(n),b(n);
     rep(i,n){
        cin>>a[i];
        if(i%2==0) sum+=a[i];
        else sum-=a[i];
     }
     b[0]=sum/2;
     rep1(i,1,n){
        b[i]=a[i-1]-b[i-1];
     }
     rep(i,n) cout<< b[i]*2 << endl;
    }

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37599690
 * Submitted at: 2022-12-28 11:57:08
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_a
 * Result: RE
 * Execution Time: 113 ms
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
      ll n,t,sum=0;
      cin>>n>>t;
      vector<ll> a(n);
      rep(i,n) {
        cin>>a[i];
        sum+=a[i];
      }
      t=t%sum;
      rep(i,n){
        if(t>a[i]){
            t-=a[i];
        }else{
            cout<< i+1<<" "<<t << endl;
            return 0;
        }
      }

    }

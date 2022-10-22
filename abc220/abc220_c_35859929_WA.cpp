/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc220/submissions/35859929
 * Submitted at: 2022-10-22 10:51:06
 * Problem URL: https://atcoder.jp/contests/abc220/tasks/abc220_c
 * Result: WA
 * Execution Time: 2205 ms
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

int main(){
      ll n,suma=0,cnt=0,sum=0;
      cin>>n;
      vector<int> a(n+9);
      rep(i,n) cin>>a[i];
      ll x;
      cin>>x;
      rep(i,n){
        suma+=a[i];
      }
      while(sum<x){
        sum+=suma;
        cnt+=n;
      }
      sum-=suma;
      cnt-=n;
      rep(i,n){
        sum+=a[i];
        cnt++;
        if(sum>x){
            cout<<cnt<<endl;
            return 0;
        }
      }
    }
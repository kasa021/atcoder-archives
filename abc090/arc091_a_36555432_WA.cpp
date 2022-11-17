/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc090/submissions/36555432
 * Submitted at: 2022-11-17 11:48:55
 * Problem URL: https://atcoder.jp/contests/abc090/tasks/arc091_a
 * Result: WA
 * Execution Time: 6 ms
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
using P = pair<ll,ll>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      ll n,m;
      cin>>n>>m;
      ll ans=n*m;
      if(n==1&&m==1){
        cout<< '0' << endl;
        return 0;
      }
      if(n==1||m==1){
        ans-=2;
        cout<< ans << endl;
        return 0;
      }else 
      cout<< ans-2*n-2*m+4 << endl;
    }
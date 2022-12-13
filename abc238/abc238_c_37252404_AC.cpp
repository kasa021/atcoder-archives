/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/37252404
 * Submitted at: 2022-12-13 12:19:42
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_c
 * Result: AC
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
typedef modint998244353 mint;
int main(){
      ll n,k;
      mint q=9,j=1,sum=0,nn;
      int a=0;
      vector<mint> keta(20,0);
      cin>>n;
      k=n;
      n%=998244353;
      nn=n;
      while(k>0){
        a++;//桁数
        k/=10;
      }
      keta[1]=(q*(q+1))/2;
      rep1(i,2,19){
        q=q*10;
        keta[i]=(q*(q+1))/2;
      }
      rep1(i,1,a) {
        sum+=keta[i];
        j*=10;
      }
      mint l=nn-j+1;
      sum+=(l*(l+1))/2;
      cout<< sum.val() << endl;
      
    }

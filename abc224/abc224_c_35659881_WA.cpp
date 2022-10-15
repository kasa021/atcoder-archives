/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc224/submissions/35659881
 * Submitted at: 2022-10-15 11:22:52
 * Problem URL: https://atcoder.jp/contests/abc224/tasks/abc224_c
 * Result: WA
 * Execution Time: 21 ms
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
      int n;
      cin>>n;
      vector<double> x(n+9),y(n+9);
      rep(i,n) cin>>x[i]>>y[i];

      ll ans=0;
      ans=n*(n-1)*(n-2);
      ans/=6;
      //cout<< "t" << endl;
      rep(i,n-2){
        rep1(j,i+1,n-1){
            rep1(l,j+1,n){
                double kata1,kata2;
                kata1=(y[i]-y[j])/(x[i]-x[j]);
                kata2=(y[j]-y[l])/(x[j]-x[l]);
                if(kata1==kata2) ans--;
            }
        }
      }
      cout<< ans << endl;
    }

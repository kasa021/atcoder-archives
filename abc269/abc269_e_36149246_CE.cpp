/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/36149246
 * Submitted at: 2022-11-02 03:25:28
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_e
 * Result: CE
 * Execution Time: None ms
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

int out(int a,int b,int c,int d){
  cout<< "?"<<a<<" "<<b<<" "<<c<<" "<<d<< endl;
  cin>>a;
  return a;
}

int main(){
      int n;
      cin>>n;
      int t=1,b=n,r=n,l=1;
      while(t+1!=b){
        int m=(t+b)/2;
        int res=out(t,m-1,1,n);
        (res==m-t?t:b)=m;
      }
      while(l+1!=r){
        int m=(r+l)/2;
        int res=out(1,n,l,m-1);
        (res==m-l:?l,r)=m;
      }
      cout<< "!"<<t<<" "<<l << endl;

    }
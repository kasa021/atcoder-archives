/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc188/submissions/34852468
 * Submitted at: 2022-09-14 09:13:27
 * Problem URL: https://atcoder.jp/contests/abc188/tasks/abc188_b
 * Result: AC
 * Execution Time: 45 ms
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
      ll a[n],b[n];
      rep(i,n) cin>>a[i];
      rep(i,n) cin>>b[i];
      ll cnt=0;
      rep(i,n){
        cnt+=a[i]*b[i];

      }
      if(cnt==0) cout<< "Yes" << endl;
      else cout<< "No" << endl;
    }
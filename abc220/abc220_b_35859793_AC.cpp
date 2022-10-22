/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc220/submissions/35859793
 * Submitted at: 2022-10-22 10:44:41
 * Problem URL: https://atcoder.jp/contests/abc220/tasks/abc220_b
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

int main(){
      ll k,aa=0,bb=0;
      string a,b;
      cin>>k>>a>>b;
      ll kk=1;
      for(int i=a.size()-1;i>=0;i--){
        aa+=(a[i]-'0')*kk;
        kk*=k;
      }
      //cout<< aa << endl;
      kk=1;
      for(int i=b.size()-1;i>=0;i--){
        bb+=(b[i]-'0')*kk;
        kk*=k;
      }
      //cout<< bb << endl;
      cout<< aa*bb << endl;
    }
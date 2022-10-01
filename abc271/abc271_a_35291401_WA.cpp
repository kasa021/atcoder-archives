/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35291401
 * Submitted at: 2022-10-01 12:31:20
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_a
 * Result: WA
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

int main(){
      int n;
      cin>>n;
      int a,b;
      a=n/16;
      b=n%16;
      string s;
      //cout<< a << endl;
      if(a>10){
        s='A'+(a-10);
      }else {
        s='0'+a;
      }

      if(b>10){
        s+='A'+(b-10);
      }else {
        s+='0'+b;
      }
      cout<<s<<endl;
    }

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/34996807
 * Submitted at: 2022-09-19 11:53:05
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_b
 * Result: AC
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
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      vector<string> s(10);
      rep(i,10) cin>>s[i];
      int a,b,c,d;
      bool first=true,second=true;
      rep(i,10){
        rep(j,10){
            if(s[i][j]=='#'&&first){
                a=i+1;
                first=false;
            }
            if(s[i][j]=='#'){
                b=i+1;
            }
        }
      }
      rep(i,10){
        if(s[a-1][i]=='#'&&second){
            c=i+1;
            second=false;
        }
        if(s[a-1][i]=='#') d=i+1;
      }

      cout<< a<<" "<<b << endl;
      cout<< c<<" "<<d << endl;
    }
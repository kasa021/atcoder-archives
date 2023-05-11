/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc018/submissions/41304840
 * Submitted at: 2023-05-11 09:53:45
 * Problem URL: https://atcoder.jp/contests/abc018/tasks/abc018_1
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
      int a,b,c;
      cin>>a>>b>>c;
      int m=min({a,b,c}),M=max({a,b,c});
      if(m==a){
        cout<< 3 << endl;
      }else if(M==a){
        cout<< 1 << endl;
      }else cout<< 2 << endl;
         if(m==b){
        cout<< 3 << endl;
      }else if(M==b){
        cout<< 1 << endl;
      }else cout<< 2 << endl;
         if(m==c){
        cout<< 3 << endl;
      }else if(M==c){
        cout<< 1 << endl;
      }else cout<< 2 << endl;
    }
    
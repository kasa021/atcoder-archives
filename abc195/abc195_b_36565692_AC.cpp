/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc195/submissions/36565692
 * Submitted at: 2022-11-18 03:58:14
 * Problem URL: https://atcoder.jp/contests/abc195/tasks/abc195_b
 * Result: AC
 * Execution Time: 9 ms
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
      int a,b,w,mi=INT_MAX,ma=0;
      cin>>a>>b>>w;
      rep1(n,1,1000000+1){
        if(a*n<=w*1000 && 1000*w<=b*n){
          mi=min(mi,n);
          ma=max(ma,n);
        }
      }
      if(ma==0) cout << "UNSATISFIABLE"<<endl;
      else cout<< mi<<" "<<ma << endl;
    }

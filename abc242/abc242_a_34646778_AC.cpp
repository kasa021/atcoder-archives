/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc242/submissions/34646778
 * Submitted at: 2022-09-06 02:38:07
 * Problem URL: https://atcoder.jp/contests/abc242/tasks/abc242_a
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
      double a,b,c,x;
      cin>>a>>b>>c>>x;
      if(a>=x)cout<<"1.00000000";
      else if(b>=x){
        double ans=c/(b-a);
        printf("%.10f\n",ans);
      }else {
        cout<<"0"<<endl;
      }
    }

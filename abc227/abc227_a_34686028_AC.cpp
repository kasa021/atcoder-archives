/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc227/submissions/34686028
 * Submitted at: 2022-09-08 06:00:33
 * Problem URL: https://atcoder.jp/contests/abc227/tasks/abc227_a
 * Result: AC
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
      int n,k,a;
      cin>>n>>k>>a;
      a--;
      while(k--){
        a++;
        a%=n;
       // cout<<a<<endl;
      }
      if(a==0) cout<<n;
      else cout<<a;
    }
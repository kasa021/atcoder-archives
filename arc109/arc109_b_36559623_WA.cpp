/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc109/submissions/36559623
 * Submitted at: 2022-11-17 14:56:10
 * Problem URL: https://atcoder.jp/contests/arc109/tasks/arc109_b
 * Result: WA
 * Execution Time: 508 ms
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
      ll n,sum=0,p=0,ans=0;
      cin>>n;
      while(sum<n+1){
        p++;
        sum+=p;
      }
      p--;
      //cout<< p << endl;
      ans=n-p+1;
      cout<< ans << endl;
    }
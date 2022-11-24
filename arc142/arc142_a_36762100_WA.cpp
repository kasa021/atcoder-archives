/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc142/submissions/36762100
 * Submitted at: 2022-11-24 17:48:34
 * Problem URL: https://atcoder.jp/contests/arc142/tasks/arc142_a
 * Result: WA
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
      ll n,ss,rr,ans=0;
      string s,r;
      cin>>n>>s;
      r=s;
      reverse(all(r));
      ss=stol(s);
      rr=stol(r);
      //cout<< s<<" "<<r << endl;
      rep(i,13){
        //cout<< ss<<" "<<rr << endl;
        if(n>=ss) ans++;
        if(n>=rr) ans++;
        ss*=10;
        rr*=10;
      }
      if(s==r) ans/2;
      cout<< ans << endl;
    }
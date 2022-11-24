/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc142/submissions/36761992
 * Submitted at: 2022-11-24 17:26:30
 * Problem URL: https://atcoder.jp/contests/arc142/tasks/arc142_a
 * Result: RE
 * Execution Time: 115 ms
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
      string k,s,r;
      ll n,ans=0;
      cin>>n>>k;
      s=k;
      r=k;
      //cout<< s << endl;
      reverse(all(r));
      rep(i,13){
        if(n>=stol(s)) ans++;
        if(n>=stol(r)) ans++;
        s+='0';
        r+='0';
        // cout<<s<<endl;
        // cout<< r << endl;
      }
      cout<< ans << endl;
    }
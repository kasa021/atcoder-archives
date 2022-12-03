/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc137/submissions/36946352
 * Submitted at: 2022-12-03 11:13:25
 * Problem URL: https://atcoder.jp/contests/abc137/tasks/abc137_c
 * Result: AC
 * Execution Time: 95 ms
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
//typedef modint1000000007 mint;
int main(){
      int n;
      cin>>n;
      map<string,ll> mp;
      ll ans=0;
      vector<string> s(n);
      rep(i,n){
        cin>>s[i];
        sort(all(s[i]));
        mp[s[i]]++;
      }
      bool f=false;
      for(auto [str,cnt]:mp){
        ans+=((cnt)*(cnt-1))/2;
      }
      cout<< ans << endl;
    }

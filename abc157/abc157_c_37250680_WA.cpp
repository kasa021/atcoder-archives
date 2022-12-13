/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/37250680
 * Submitted at: 2022-12-13 10:44:28
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_c
 * Result: WA
 * Execution Time: 5 ms
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
  string s;
  vector<int> num(6,-1);
  int n,m;
  cin>>n>>m;
  rep(i,m){
    int s,c;
    cin>>s>>c;
    if(num[s]==-1 || num[s]==c) num[s]=c;
    else {
      cout<< -1 << endl;
      return 0;
    }
  }
  if(n!=1 && num[1]==0) {
    cout<< -1 << endl;
    return 0;
  }
  rep1(i,1,n+1){
    if(num[i]==-1){
      s+='0';
    }else {
      s+='0'+num[i];
    }
  }
  
  bool f=false;
  rep(i,n){
    if(s[i]!='0') f=true;
  }
  if(n!=1 && !f) s[0]='1';
  cout<< s << endl;

    }

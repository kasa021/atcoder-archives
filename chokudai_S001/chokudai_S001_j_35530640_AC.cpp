/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/35530640
 * Submitted at: 2022-10-09 08:58:50
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_j
 * Result: AC
 * Execution Time: 59 ms
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

pair<ll,vector<ll>> invNum(vector<ll> &a){
  ll n=a.size();
  if(n==1) return {0,a};
  ll mid = n/2;
  vector<ll> leftVec(a.begin(),a.begin()+mid);
  vector<ll> rightVec(a.begin()+mid,a.end());
  auto left=invNum(leftVec);
  auto right=invNum(rightVec);
  vector<ll> res;
  ll inv=0;
  inv += left.first+right.first;
  ll i=0,j=0;
  while(i<left.second.size() && j<right.second.size()) {
    if(left.second[i] < right.second[j]){ res.push_back(left.second[i++]); }
    else { res.push_back(right.second[j++]);
           inv += left.second.size()-i;
}
}
  while(i<left.second.size()) {res.push_back(left.second[i++]); }
  while(j<right.second.size()) { res.push_back(right.second[j++]); }
  return {inv,res};
}

int main(){
      int n;
      cin>>n;
      vector<ll> a(n);
      rep(i,n) cin>>a[i];
      ll ans=invNum(a).first;
      cout<< ans << endl;
    }

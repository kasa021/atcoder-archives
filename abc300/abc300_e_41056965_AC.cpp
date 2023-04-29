/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41056965
 * Submitted at: 2023-04-29 15:32:51
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_e
 * Result: AC
 * Execution Time: 20 ms
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
using mint=modint998244353;

ll N;
map<ll,mint> memo;

mint dp(ll n){
  if(n>=N) return n==N ? 1 : 0;
  if(memo.count(n)) return memo[n];
  mint res=0;
  rep1(i,2,7){
    res+=dp(i*n);
  }
  return memo[n]= res/5;
}

int main(){
  cin>>N;  
  cout<<dp(1).val()<<endl;
  }
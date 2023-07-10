/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43463779
 * Submitted at: 2023-07-10 13:46:28
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bo
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
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

string base_8_to_base_10(string n){
  ll res = 0;
  ll base = 1;
  for(int i=n.size()-1;i>=0;i--){
    res += (n[i]-'0')*base;
    base *= 8;
  }
  return to_string(res);
}

string base_10_to_base_9(string s){
  ll n = stoll(s);
  string res = "";
  while(n>0){
    res += to_string(n%9);
    n /= 9;
  }
  reverse(all(res));
  rep(i,res.size()){
    if(res[i]=='8') res[i] = '5';
  }
  if(res=="") res = "0";
  return res;
}


int main() {
  string n;
  int k;
  cin >> n >> k;
  rep(_,k){
    n = base_8_to_base_10(n);
    n = base_10_to_base_9(n);
  }
  cout<<n<<endl;
}

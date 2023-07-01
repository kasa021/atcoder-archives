/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc151/submissions/43077749
 * Submitted at: 2023-07-01 04:10:52
 * Problem URL: https://atcoder.jp/contests/abc151/tasks/abc151_c
 * Result: AC
 * Execution Time: 43 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int n, m,ac=0,wa=0;
  cin>>n>>m;
  vector<bool> acs(n,false);
  vector<int> was(n,0);
  rep(i,m){
    int p;
    string s;
    cin>>p>>s;
    p--;
    if(s=="AC"){
      if(!acs[p]){
        acs[p]=true;
        ac++;
        wa+=was[p];
      }
    }else{
      if(!acs[p]){
        was[p]++;
      }
    }
  }
  cout<<ac<<" "<<wa<<endl;
}

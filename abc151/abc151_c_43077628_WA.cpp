/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc151/submissions/43077628
 * Submitted at: 2023-07-01 04:03:26
 * Problem URL: https://atcoder.jp/contests/abc151/tasks/abc151_c
 * Result: WA
 * Execution Time: 41 ms
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
  int n, m, ac=0, wa=0;
  cin >> n >> m;
  vector<bool> problems(n, false);
  rep(i,m){
    int p;
    string s;
    cin >> p >> s;
    p--;
    if(s == "AC"){
      if(!problems[p]){
        ac++;
        problems[p] = true;
      }
    }else{
      if(!problems[p]){
        wa++;
      }
    }
  }
  cout << ac << " " << wa << endl;

}

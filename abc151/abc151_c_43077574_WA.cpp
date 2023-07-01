/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc151/submissions/43077574
 * Submitted at: 2023-07-01 03:59:58
 * Problem URL: https://atcoder.jp/contests/abc151/tasks/abc151_c
 * Result: WA
 * Execution Time: 42 ms
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
      problems[p] = true;
    }else {
      if(!problems[p])
        wa++;
    }
  }
  rep(i,n){
    if(problems[i])
      ac++;
  }
  cout << ac << " " << wa << endl;
}

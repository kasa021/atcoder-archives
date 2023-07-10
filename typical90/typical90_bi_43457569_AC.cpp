/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43457569
 * Submitted at: 2023-07-10 09:44:51
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bi
 * Result: AC
 * Execution Time: 175 ms
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
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int q;
  cin >> q;
  deque<int> que;
  rep(i,q){
    int t, x;
    cin >> t >> x;
    if(t == 1){
      que.push_front(x);
    }else if(t == 2){
      que.push_back(x);
    }else{
      cout << que[x - 1] << endl;
    }
  }
  return 0;
}
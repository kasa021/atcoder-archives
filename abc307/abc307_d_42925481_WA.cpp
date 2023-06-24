/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42925481
 * Submitted at: 2023-06-24 13:29:29
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_d
 * Result: WA
 * Execution Time: 27 ms
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
  int n;
  cin >> n;
  string s;
  cin >> s;

  stack<int> st_first;
  queue<int> st_second;
  vector<int> ok(n, 0);
  int cnt = 1;
  rep(i,n){
    if(s[i] == '(') st_first.push(i);
    else if (s[i] == ')') st_second.push(i);
    if(!st_first.empty() && !st_second.empty()){
      int first = st_first.top();
      int second = st_second.front();
      if(first < second){
        ok[first] = cnt;
        ok[second] = cnt;
        st_first.pop();
        st_second.pop();
        cnt++;
      }
    }
  }
  // rep(i, n) cout << ok[i];
  // cout << endl;
  stack<int> st1;
  rep(i, n) {
    if(st1.size() ==0){
      if(ok[i] == 0) continue;
      else st1.push(ok[i]);
    }else {
      if(ok[i] == 0) ok[i] = st1.top();
      else {
        if(st1.top() == ok[i]) st1.pop();
        else st1.push(ok[i]);
      }
    }
  }
  // rep(i, n) cout << ok[i];
  // cout << endl;
  bool f = true;
  set<int> st;
  rep(i, n) {
    if (ok[i] == 0) cout << s[i];

  }
  cout << endl;
}
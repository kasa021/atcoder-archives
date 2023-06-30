/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc044/submissions/43063635
 * Submitted at: 2023-06-30 08:22:21
 * Problem URL: https://atcoder.jp/contests/abc044/tasks/abc044_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int) (n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int main() {
  string w;
  cin>>w;
  vector<int> cnt(26);
  for (char c : w) {
    cnt[c - 'a']++;
  }
  for (int i : cnt) {
    if (i % 2 == 1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}

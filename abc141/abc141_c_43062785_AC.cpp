/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc141/submissions/43062785
 * Submitted at: 2023-06-30 07:44:56
 * Problem URL: https://atcoder.jp/contests/abc141/tasks/abc141_c
 * Result: AC
 * Execution Time: 178 ms
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
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> a(n);
  rep(i,q){
    int x;
    cin >> x;
    a[x-1]++;
  }
  int ans = 0;
  rep(i,n){
    if(k - (q - a[i]) > 0) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42938220
 * Submitted at: 2023-06-24 19:01:58
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_a
 * Result: AC
 * Execution Time: 46 ms
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
  int n, l,k;
  cin >> n >> l>>k;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  int left = 0, right = l;
  while(right-left>1){
    int mid = (left+right)/2;
    int cnt = 0;
    int pre = 0;
    rep(i,n){
      if(a[i]-pre>=mid && l-a[i]>=mid){
        cnt++;
        pre = a[i];
      }
    }
    if(cnt>=k) left = mid;
    else right = mid;
  }
  cout << left << endl;
}
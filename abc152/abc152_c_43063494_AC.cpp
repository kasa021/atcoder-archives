/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc152/submissions/43063494
 * Submitted at: 2023-06-30 08:15:16
 * Problem URL: https://atcoder.jp/contests/abc152/tasks/abc152_c
 * Result: AC
 * Execution Time: 57 ms
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
  int n;
  cin>>n;
  vector<int> a(n);
  rep(i, n) cin>>a[i];
  int ans = 0;
  int mi=1e9;
  rep(i,n){
    if(mi >= a[i]){
      mi = a[i];
      ans++;
    }
  }
  cout<<ans<<endl;
}

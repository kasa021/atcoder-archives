/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc162/submissions/42721612
 * Submitted at: 2023-06-18 12:40:18
 * Problem URL: https://atcoder.jp/contests/arc162/tasks/arc162_a
 * Result: AC
 * Execution Time: 7 ms
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
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i], a[i]--;
    vector<bool> used(n+9,true);
    rep(i,n){
        rep(j,n){
            if(i==j) continue;
            if(i>j){ // iの方が順位低い時
                if(a[i]<a[j]) used[j]=false;
            }else { // iの方が順位高い時
                if(a[i]>a[j]) used[i]=false;
            }
        }
    }
    int ans=0;
    rep(i,n){
        if(used[i]) ans++;
    }
    cout << ans << endl;

  }
}
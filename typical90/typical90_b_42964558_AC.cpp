/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42964558
 * Submitted at: 2023-06-25 14:12:41
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_b
 * Result: AC
 * Execution Time: 165 ms
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
  cin>>n;
  vector<string> s;
  rep(i,(1<<n)){
    string t = "";
    vector<int> a(n + 9);
    int cnt1 = 0, cnt2 = 0;
    rep(j, n) {
      if(i & (1<<j)){
        t += '(';
        cnt1++;
        a[j+1] = a[j] + 1;
      }else {
        t += ')';
        cnt2++;
        a[j+1] = a[j] - 1;
      }
    }
    if(cnt1 == cnt2 && *min_element(all(a)) >= 0){
      s.push_back(t);
    }
  }
  sort(all(s));
  rep(i,s.size()){
    cout << s[i] << endl;
  }
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc124/submissions/43063729
 * Submitted at: 2023-06-30 08:27:14
 * Problem URL: https://atcoder.jp/contests/abc124/tasks/abc124_c
 * Result: AC
 * Execution Time: 13 ms
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
  string s;
  cin >> s;
  int cnt1 = 0, cnt2 = 0;
  rep(i,s.size()){
    if(i%2==0){
      if(s[i]=='0') cnt1++;
      else cnt2++;
    }else{
      if(s[i]=='0') cnt2++;
      else cnt1++;
    }
  }
  cout << min(cnt1, cnt2) << endl;
}

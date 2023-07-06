/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc022/submissions/43286173
 * Submitted at: 2023-07-06 05:19:30
 * Problem URL: https://atcoder.jp/contests/agc022/tasks/agc022_a
 * Result: WA
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
  string s;
  cin >> s;
  vector<int> alp(26);
  rep(i,s.size()){
    alp[s[i]-'a']++;
  }
  if(s.size()<26){
    rep(i, 26) {
      if (alp[i] == 0) {
        cout << s + (char)('a' + i) << endl;
        return 0;
      }
    }
  }else{
    for(int i=25; i>=0; i--){
      if(s[i] != 'z'){
        alp[s[i]-'a']--;
        for(int j=s[i]-'a'+1; j<26; j++){
          if(alp[j] == 0){
            cout << s.substr(0,i) + (char)('a'+j) << endl;
            return 0;
          }
        }
      }
    }
    cout << -1 << endl;
  }

  return 0;
  

}
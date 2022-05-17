/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/31763909
 * Submitted at: 2022-05-17 10:34:02
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_b
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int ans = 0;
    
      while(a>0&&k>0) {
          ans +=a;
          a--;
          k--;
    }
     while(b>0&&k>0) {
          k--;
    }
     while(c>0&&k>0) {
          ans +=c;
          c--;
          k--;
    }

    cout<<ans<<ensl;
    
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/31763952
 * Submitted at: 2022-05-17 10:37:18
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_b
 * Result: WA
 * Execution Time: 1133 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int ans = 0;
    int a,b,c,k;
    cin>>a>>b>>c>>k;
    
      while(a>0&&k>0) {
          ans++;
          a--;
          k--;
    }
     while(b>0&&k>0) {
          k--;
    }
     while(c>0&&k>0) {
          ans--;
          c--;
          k--;
    }

    cout<<ans<<endl;

}
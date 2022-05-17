/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/31763276
 * Submitted at: 2022-05-17 09:51:34
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cq
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }else if (op == "-") {
    cout << A - B << endl;
  }else if (op == "*") {
    cout << A * B << endl;
  }else if (op == "/") {
      if(B==0) cout<<"error"<<endl;
      else cout << A / B << endl;
  }else if (op == "?"||op=="="||op=="!") {
    cout << "error"<< endl;
  }
  return 0;
}
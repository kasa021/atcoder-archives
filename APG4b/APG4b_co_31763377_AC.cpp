/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/31763377
 * Submitted at: 2022-05-17 09:58:02
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_co
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン1
  if (p == 1) {
    int price;
    cin >> price;
    int N;
    cin>>N;
    cout<<N*price<<endl;
  }

  // パターン2
  if (p == 2) {
    string text;
    int price;
    cin >> text >> price;
    int N;
    cin>>N;
    cout<<text<<"!"<<endl;
    cout<<N*price<<endl;
  }

  

  
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc188/submissions/36786484
 * Submitted at: 2022-11-26 07:38:35
 * Problem URL: https://atcoder.jp/contests/abc188/tasks/abc188_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;


int main() {
    int a,b;
  cin>>a>>b;
    if(abs(a-b)<3) cout<< "Yes" << endl;
    else cout<< "No" << endl;
}
   

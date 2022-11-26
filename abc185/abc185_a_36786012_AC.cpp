/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/36786012
 * Submitted at: 2022-11-26 07:15:37
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_a
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
    vector<int> a(4);
    rep(i,4) cin>>a[i];
    cout<<* min_element(all(a)) << endl;
}
   

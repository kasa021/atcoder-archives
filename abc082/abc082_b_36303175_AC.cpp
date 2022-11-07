/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc082/submissions/36303175
 * Submitted at: 2022-11-07 08:36:19
 * Problem URL: https://atcoder.jp/contests/abc082/tasks/abc082_b
 * Result: AC
 * Execution Time: 8 ms
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
    string s,t;
    cin>>s>>t;
    sort(all(s));
    sort(all(t));
    reverse(all(t));
    if(s<t) cout<< "Yes" << endl;
    else cout<< "No" << endl;
}
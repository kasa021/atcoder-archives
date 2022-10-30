/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36085463
 * Submitted at: 2022-10-30 04:22:26
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_a
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
    int n;
    cin>>n;
    vector<int> h(n);
    rep(i,n) cin>>h[i];
    auto ind=max_element(all(h))-h.begin();
    cout<< ind +1<< endl;
}
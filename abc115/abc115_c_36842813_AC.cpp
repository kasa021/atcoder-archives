/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc115/submissions/36842813
 * Submitted at: 2022-11-27 06:49:35
 * Problem URL: https://atcoder.jp/contests/abc115/tasks/abc115_c
 * Result: AC
 * Execution Time: 45 ms
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
    int n,k,m=INT_MAX;
    cin>>n>>k;
    vector<int> h(n);
    rep(i,n) cin>>h[i];
    sort(all(h));
    rep(i,n-k+1){
        m=min(m,h[i+k-1]-h[i]);
    }
    cout<< m << endl;
}
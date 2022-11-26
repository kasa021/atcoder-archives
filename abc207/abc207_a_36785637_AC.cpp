/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc207/submissions/36785637
 * Submitted at: 2022-11-26 06:57:13
 * Problem URL: https://atcoder.jp/contests/abc207/tasks/abc207_a
 * Result: AC
 * Execution Time: 6 ms
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
    vector<int> a(3);
    rep(i,3) cin>>a[i];
    vector<int> b;
    rep(i,3){
        rep(j,3){
            if(i==j) continue;
            b.push_back(a[i]+a[j]);
        }
    }
    cout<< *max_element(all(b)) << endl;
}
   

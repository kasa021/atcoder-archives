/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc156/submissions/36786240
 * Submitted at: 2022-11-26 07:26:09
 * Problem URL: https://atcoder.jp/contests/abc156/tasks/abc156_a
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
    int n,r;
    cin>>n>>r;
    if(n>=10) cout<< r << endl;
    else cout<< r+100*(10-n) << endl;
}
   

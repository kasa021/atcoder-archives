/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36840085
 * Submitted at: 2022-11-27 04:07:20
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_b
 * Result: AC
 * Execution Time: 9 ms
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
    if(s.find(t)!=string::npos) cout<< "Yes" << endl;
    else cout<< "No" << endl;
}
   

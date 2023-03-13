/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/39693770
 * Submitted at: 2023-03-13 03:35:04
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    vector<string> s(3);
    rep(i,3)cin>>s[i];
    string t;
    cin>>t;
    rep(i,t.size()){
        cout<< s[t[i]-'1'];
    }cout << endl;
}
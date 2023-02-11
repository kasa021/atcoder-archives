/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc289/submissions/38780254
 * Submitted at: 2023-02-11 12:01:14
 * Problem URL: https://atcoder.jp/contests/abc289/tasks/abc289_a
 * Result: AC
 * Execution Time: 7 ms
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
    string s;
    cin>>s;
    rep(i,s.size()){
        if(s[i]=='1') s[i]='0';
        else s[i]='1';
    }
    cout<<s<<endl;
}
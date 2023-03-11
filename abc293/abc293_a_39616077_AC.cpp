/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc293/submissions/39616077
 * Submitted at: 2023-03-11 12:20:55
 * Problem URL: https://atcoder.jp/contests/abc293/tasks/abc293_a
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
   // cout<< s.size() << endl;
    rep1(i,1,(int)s.size()+1){
        char a=s[2*i-1-1];
        s[2*i-1-1]=s[2*i-1];
        s[2 * i - 1] = a;
    }
    cout<< s << endl;
}
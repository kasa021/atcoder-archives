/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc223/submissions/37696488
 * Submitted at: 2023-01-02 12:33:08
 * Problem URL: https://atcoder.jp/contests/abc223/tasks/abc223_b
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    string s;
    cin>>s;
    string m,M;
    m=s;M=s;
    rep(i,s.size()){
        s=s.substr(1,s.size()-1)+s[0];
        if(m>s) m=s;
        if(M<s) M=s;
    }
    cout<< m << endl;
    cout<< M << endl;
}

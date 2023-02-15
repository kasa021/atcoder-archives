/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/38902714
 * Submitted at: 2023-02-15 08:34:34
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_b
 * Result: AC
 * Execution Time: 8 ms
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
    int n;
    cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];
    bool f=true;
    rep(i,n){
        if(s[i][0]!='H' && s[i][0]!='D'&& s[i][0]!='C'&&s[i][0]!='S') f=false;
        if(s[i][1]!='A' && s[i][1]!='2' && s[i][1]!='3' && s[i][1]!='4' && s[i][1]!='5' &&s[i][1]!='6' && s[i][1]!='7' && s[i][1]!='8' &&s[i][1]!='9' &&s[i][1]!='T' &&s[i][1]!='J' &&s[i][1]!='Q' &&s[i][1]!='K') f=false;
    }
    rep(i,n){
        rep(j,n){
            if(i==j) continue;
            if(s[i]==s[j]) f=false;
        }
    }
    cout << (f ? "Yes" : "No") << endl;
}
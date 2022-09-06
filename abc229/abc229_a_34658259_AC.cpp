/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/34658259
 * Submitted at: 2022-09-06 13:33:35
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_a
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
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    string s,t;
    cin>>s>>t;
    if(s[0]=='.'&&s[1]=='#'&&t[0]=='#'&&t[1]=='.')cout<< "No" << endl;
    else if(s[0]=='#'&&s[1]=='.'&&t[0]=='.'&&t[1]=='#') cout<< "No" << endl;
    else cout<< "Yes" << endl;
}
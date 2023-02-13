/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc156/submissions/38857093
 * Submitted at: 2023-02-13 04:16:20
 * Problem URL: https://atcoder.jp/contests/abc156/tasks/abc156_d
 * Result: AC
 * Execution Time: 46 ms
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
using mint = modint1000000007;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    mint ans=1,conbination=1;

    ans=pow_mod(2,n,1000000007);

    //cout<< ans.val() << endl;
    rep(i,a){
        conbination*=(n-i);
        conbination/=(i+1);
    }
    ans-=conbination;
    conbination=1;
    //cout<< ans.val() << endl;
    rep(i,b){
        conbination*=(n-i);
        conbination/=(i+1);
    }
    ans-=conbination+1;
    cout<< ans.val() << endl;
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc163/submissions/39080779
 * Submitted at: 2023-02-21 03:46:15
 * Problem URL: https://atcoder.jp/contests/abc163/tasks/abc163_d
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
using mint = modint1000000007;

int main()
{
    int a,b;
    cin>>a>>b;
    mint n=a,k=b,ans=0;
    ans=n+1+(n+1)*(n+1)*(n+2)/2-(n+1)*(n+2)*(2*n+3)/6;
    ans-=k-1+(n+1)*k*(k-1)/2-(k-1)*k*(2*k-1)/6;
    cout<< ans.val() << endl;
    
}
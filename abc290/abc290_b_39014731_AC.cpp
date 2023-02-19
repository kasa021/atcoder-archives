/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc290/submissions/39014731
 * Submitted at: 2023-02-19 12:04:12
 * Problem URL: https://atcoder.jp/contests/abc290/tasks/abc290_b
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
    int  n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt=0;
    rep(i,n){
        if(s[i]=='o' && cnt<k) s[i]='o',cnt++;
        else s[i]='x';
    }
    cout<< s << endl;
}
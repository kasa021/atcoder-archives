/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc305/submissions/42124643
 * Submitted at: 2023-06-10 12:04:57
 * Problem URL: https://atcoder.jp/contests/abc305/tasks/abc305_b
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
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()

int main(){
    map<char, int> mp;
    mp['A'] = 0;
    mp['B'] = 3;
    mp['C'] = 4;
    mp['D'] = 8;
    mp['E'] = 9;
    mp['F'] = 14;
    mp['G'] = 23;
    char p, q;
    cin >> p >> q;
    int ans = abs(mp[p] - mp[q]);
    cout << ans << endl;
    }
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/41889691
 * Submitted at: 2023-06-01 10:01:29
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_c
 * Result: AC
 * Execution Time: 446 ms
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
    string s;
    map<string,int> mp;
    rep(i,n){
        cin>>s;
        if(mp.count(s)) cout<< s<<"(" <<mp[s]<<")" << endl;
        else cout<<s<<endl;
        mp[s]++;
    }
}
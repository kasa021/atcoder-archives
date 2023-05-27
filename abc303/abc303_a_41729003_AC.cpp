/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc303/submissions/41729003
 * Submitted at: 2023-05-27 12:04:04
 * Problem URL: https://atcoder.jp/contests/abc303/tasks/abc303_a
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
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    bool ok=true;
    int a=0;
    rep(i,n){
        if(s[i]==t[i] || ((s[i]=='1' && t[i]=='l') || s[i]=='l' && t[i]=='1') || ((s[i]=='0' && t[i]=='o') ||s[i]=='o' && t[i]=='0')){
            a++;
        }else ok=false;
    }
    if(ok) cout<< "Yes" << endl;
    else cout<< "No" << endl;
}
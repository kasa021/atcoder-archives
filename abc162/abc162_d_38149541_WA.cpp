/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc162/submissions/38149541
 * Submitted at: 2023-01-19 06:48:33
 * Problem URL: https://atcoder.jp/contests/abc162/tasks/abc162_d
 * Result: WA
 * Execution Time: 31 ms
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
    int n,ans=0;
    string s;
    cin>>n>>s;
    int r=0,g=0,b=0;
    rep(i,n){
        if(s[i]=='R') r++;
        else if(s[i]=='G') g++;
        else b++;
    }
    ans=r*b*g;
    int cnt=0;
    rep(i,n){
        rep1(j,i+1,n){
            if( 2*j-i<n &&s[i]!=s[j] && s[j]!=s[2*j-i] && s[2*j-i]!=s[i]){
                cnt++;
            }
        }
    }
    cout<< ans-cnt << endl;
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc173/submissions/37954161
 * Submitted at: 2023-01-12 04:17:49
 * Problem URL: https://atcoder.jp/contests/abc173/tasks/abc173_c
 * Result: AC
 * Execution Time: 11 ms
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
    int h,w,k,ans=0;
    cin>>h>>w>>k;
    vector<string> c(h);
    rep(i,h) cin>>c[i];
    rep(i,(1<<h)){
        rep(j,(1<<w)){
            vector<string> t=c;
            rep(l,h){
                rep(s,w){
                    if(i & (1<<l) || j & (1<<s)) t[l][s]='.';
                }
            }
            int cnt=0;
            rep(l,h){
                rep(s,w) {
                    if(t[l][s]=='#') cnt++;
                }
            }
            if(k == cnt) ans++;
        }
    }   
    cout<< ans << endl;
}

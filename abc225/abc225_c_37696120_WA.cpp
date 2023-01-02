/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/37696120
 * Submitted at: 2023-01-02 12:16:50
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_c
 * Result: WA
 * Execution Time: 33 ms
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
    int n,m;
    cin>>n>>m;
    vector<int> vir(n),line(m);
    vector<vector<int>> b(n,vector<int> (m));
    rep(i,n)rep(j,m) cin>>b[i][j];
    vir[0]=b[0][0]/7;
    rep1(i,1,n){
        vir[i]=vir[i-1]+1;
    }
    line[0]=b[0][0]%7;
    rep1(i,1,m) line[i]=line[i-1]+1;
    bool f=true;
    rep(i,n){
        rep(j,m){
            if((b[i][j]/7)!=vir[i]) f=false;
            if((b[i][j]%7)!=line[j]) f=false;
            //cout<< line[j]<<" "<<b[i][j]%7 << endl;
        }
    }
    cout << (f ? "Yes" : "No") << endl;
}

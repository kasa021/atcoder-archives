/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc098/submissions/37657282
 * Submitted at: 2022-12-31 09:48:49
 * Problem URL: https://atcoder.jp/contests/abc098/tasks/arc098_a
 * Result: AC
 * Execution Time: 20 ms
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> west(n+9),east(n+9);
    rep(i,n){
        if(s[i]=='W') west[i+1]++;
        else east[i+1]++;
    }
    rep(i,n){
        west[i+1]+=west[i];
        east[i+1]+=east[i];
    }
    int ans=n+9;
    rep(i,n){
        if(i==0){
            ans=min(ans,east[n]-east[1]);
        }else if(i==n-1){
            ans=min(ans,west[n-1]);
        }else {
            ans=min(ans,(east[n]-east[i])+west[i]);
        }
        //cout<< ans << endl;
    }
    cout<< ans << endl;

}

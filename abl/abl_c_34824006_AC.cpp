/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abl/submissions/34824006
 * Submitted at: 2022-09-12 15:08:24
 * Problem URL: https://atcoder.jp/contests/abl/tasks/abl_c
 * Result: AC
 * Execution Time: 59 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;



int main(){
    int n,m;
    cin>>n>>m;
    dsu g(n);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--,b--;
        g.merge(a,b);
    }
    int ans=g.groups().size()-1;
    cout<< ans << endl;
    }
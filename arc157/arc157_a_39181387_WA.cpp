/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc157/submissions/39181387
 * Submitted at: 2023-02-25 12:12:42
 * Problem URL: https://atcoder.jp/contests/arc157/tasks/arc157_a
 * Result: WA
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
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    if((a==0 && d==0)|| (c==0 && d==0 && a==0) || (d==0 && a==0 && b==0)){
        cout<< "No" << endl;
    }else cout<< "Yes" << endl;
    }

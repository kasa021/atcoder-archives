/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc137/submissions/41315990
 * Submitted at: 2023-05-12 02:52:34
 * Problem URL: https://atcoder.jp/contests/arc137/tasks/arc137_b
 * Result: AC
 * Execution Time: 45 ms
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
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    int mn=0,mx=0,cur=0,x=0,y=0;
    rep(i,n){
        if(a[i]==0) cur--;
        else cur++;
        x=min(x,cur-mx);
        y=max(y,cur-mn);
        mn=min(mn,cur);
        mx=max(mx,cur);
    }
    cout<< y-x+1 << endl;
    }

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc290/submissions/39022286
 * Submitted at: 2023-02-19 12:13:12
 * Problem URL: https://atcoder.jp/contests/abc290/tasks/abc290_c
 * Result: AC
 * Execution Time: 111 ms
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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    sort(all(a));
    a.erase(unique(all(a)),a.end());
    int cnt=0,prev=-1;
    for(auto v:a){
        //cout<< v <<" ";
        if(v==prev+1)cnt++,prev=v;
    }cout<<endl;
    cout<< min(k,cnt) << endl;
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/31991985
 * Submitted at: 2022-05-28 07:42:48
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    set<int> s;
    rep(i,n) s.insert(a[i]);
    cout<<s.size()<<endl;
    return 0;
    
}
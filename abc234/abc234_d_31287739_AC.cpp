/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/31287739
 * Submitted at: 2022-04-26 12:53:04
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_d
 * Result: AC
 * Execution Time: 829 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> p(n);
    rep(i,n) cin>> p[i];
    priority_queue<int,vector<int>,greater<int>> q;
    rep(i,k-1) q.push(p[i]);
    for(int i=k-1;i<n;++i){
        q.push(p[i]);
        while(q.size()>k) q.pop();
        cout<<q.top()<<endl;
    }
    return 0;
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/32846584
 * Submitted at: 2022-06-30 06:37:49
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph <vector<vector<int>>

int main() {
    int n,k,q;
    cin>>n>>k>>q;
    int a[k+1],l[q+1];
    rep(i,k) cin>>a[i];
    rep(i,q) cin>>l[i];
    for(int i=1;i<=q;i++){
        if(a[l[i]]<n&&a[l[i]]!=(a[l[i]+1]-1)) a[l[i]]++;
    }
    rep(i,k) cout<<a[i]<<endl;
    return 0;
}
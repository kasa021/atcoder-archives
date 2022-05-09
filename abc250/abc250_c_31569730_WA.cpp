/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31569730
 * Submitted at: 2022-05-09 11:42:21
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_c
 * Result: WA
 * Execution Time: 72 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    vector<int> x(q);
    vector<int> v(n+1),p(n+1);

    for(int i=1;i<=n;i++) v[i] = i,p[i] = i;
    for(int i=0;i<q;i++) cin>>x[i];

    for(int i=0;i<=q;i++){
        int p0=p[x[i]];
        int p1=p0;
        if(p0==n) p1--;
        else p1++;
        int v0=v[p0];
        int vv=v[p1];
        swap(v[p0],v[p1]);
        swap(p[vv],p[p1]);
    }
    for(int i=1;i<=n;i++){
        if(i!=1)cout<<' ';
        cout<<v[i];
    }
    cout<<endl;

    return 0;

    
}
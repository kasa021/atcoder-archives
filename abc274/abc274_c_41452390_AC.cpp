/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/41452390
 * Submitted at: 2023-05-16 02:48:34
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_c
 * Result: AC
 * Execution Time: 602 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)


int main()
{
    int n;
    cin>>n;
    vector<int> a(n),ameba(2*n+1);
    rep(i,n) cin>>a[i];
    rep(i,n){
        int s=(i+1)*2,t=(i+1)*2+1;
        ameba[s]=ameba[a[i]]+1;
        ameba[t]=ameba[a[i]]+1;
    }
    rep1(i,1,2*n+2) cout<<ameba[i]<<endl;
}
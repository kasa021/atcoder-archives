/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/41102779
 * Submitted at: 2023-05-01 14:52:53
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_ce
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(m),b(m);
    rep(i,m) cin>>a[i]>>b[i];

    vector<vector<char>> result(n,vector<char>(n,'-'));
    rep(i,m){
        result[a[i]-1][b[i]-1]='o';
        result[b[i]-1][a[i]-1]='x';
    }
    rep(i,n){
        rep(j,n){
            cout<<result[i][j];
            if(j==n-1) cout<<endl;
            else cout<<" ";
        }
    }
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc255/submissions/32374353
 * Submitted at: 2022-06-11 12:02:01
 * Problem URL: https://atcoder.jp/contests/abc255/tasks/abc255_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int r,c;
    cin>>r>>c;
    int a[3][3];
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            cin>>a[i][j];
        }
    }
    cout<<a[r][c]<<endl;
    return 0;
}
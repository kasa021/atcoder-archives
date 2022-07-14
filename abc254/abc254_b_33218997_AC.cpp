/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/33218997
 * Submitted at: 2022-07-14 09:28:13
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
//#define graph=<vector<vector<int>>
using ll = long long ;

int main() {
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    a[0][0]=1;
    rep(i,n){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                a[i][j]=1;
            }else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    rep(i,n){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
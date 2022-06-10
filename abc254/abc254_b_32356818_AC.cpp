/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/32356818
 * Submitted at: 2022-06-10 13:41:50
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> a(30,vector<int>(31,0));
    a[0][0]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i) {a[i][j]=1;
               }else{
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
            if(i==j) cout<<endl;
        }
    }
    return 0;
}
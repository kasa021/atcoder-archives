/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33459731
 * Submitted at: 2022-07-23 12:41:08
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_b
 * Result: AC
 * Execution Time: 38 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    int n;
    cin>>n;
    vector<string> a(n);
    rep(i,n){
        cin>>a[i];
    }
    rep(i,n){
        rep(j,n){
            if(i==j) continue;
            if(a[i][j]=='W'){
                if(a[j][i]!='L'){
                    cout<<"incorrect"<<endl;
                    return 0;
                }
            }
            if(a[i][j]=='L'){
                if(a[j][i]!='W'){
                    cout<<"incorrect"<<endl;
                    return 0;
                }
            }
            if(a[i][j]=='D'){
                if(a[j][i]!='D'){
                    cout<<"incorrect"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"correct"<<endl;
    return 0;
}
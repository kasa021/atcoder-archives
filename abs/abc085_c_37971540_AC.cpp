/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abs/submissions/37971540
 * Submitted at: 2023-01-13 02:56:19
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc085_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;
int main(){
    int n,y;
    cin>>n>>y;
    for(int i=0;i<=n;i++){
        for(int j=0;i+j<=n;j++){
            int k=n-(i+j);
            int now=10000*i+5000*j+1000*k;
            if(now==y){
                cout<< i<<" "<<j<<" "<<k << endl;
                return 0;
            }
        }
    }
    cout<< -1<<" "<<-1<<" "<<-1 << endl;
    }

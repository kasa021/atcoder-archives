/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc085/submissions/36843596
 * Submitted at: 2022-11-27 07:25:50
 * Problem URL: https://atcoder.jp/contests/abc085/tasks/abc085_c
 * Result: WA
 * Execution Time: 436 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;


int main() {
    int n,m,sum=0;
    cin>>n>>m;
    rep(i,n+1){
        rep(j,n+1-i){
            rep(k,n+1-j-i){
                if(i+j+k==n){
                    sum=10000*i+5000*j+1000*k;
                    if(m==sum){
                        cout<< i<<" "<<j<<" "<<k << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<< "-1" << endl;

}
   

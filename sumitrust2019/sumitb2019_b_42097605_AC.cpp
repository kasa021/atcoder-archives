/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/sumitrust2019/submissions/42097605
 * Submitted at: 2023-06-09 10:28:50
 * Problem URL: https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_b
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
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()

int main(){
    int n;
    cin >> n;
    int tax = 108;
    rep1(i,1,100000){
        if( (int)(i*tax/100) == n){
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
}
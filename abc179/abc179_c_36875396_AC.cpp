/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc179/submissions/36875396
 * Submitted at: 2022-11-29 05:53:42
 * Problem URL: https://atcoder.jp/contests/abc179/tasks/abc179_c
 * Result: AC
 * Execution Time: 10 ms
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
    int n,ans=0;
    cin>>n;
    rep1(i,1,n+1){
       ans+=(n-1)/i;
    }
    cout<< ans << endl;
}
   

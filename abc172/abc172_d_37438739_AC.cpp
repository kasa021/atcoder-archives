/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc172/submissions/37438739
 * Submitted at: 2022-12-22 06:17:02
 * Problem URL: https://atcoder.jp/contests/abc172/tasks/abc172_d
 * Result: AC
 * Execution Time: 94 ms
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
    ll n,ans=0;
    cin>>n;
    rep1(i,1,n+1){
        ans+=(i*(n/i)*(n/i+1))/2;
    }cout<< ans << endl;
}
   

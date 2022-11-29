/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc133/submissions/36875707
 * Submitted at: 2022-11-29 06:14:00
 * Problem URL: https://atcoder.jp/contests/abc133/tasks/abc133_c
 * Result: AC
 * Execution Time: 20 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (long long i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;



int main() {
    ll l,r,m=2019;
    cin>>l>>r;
    rep1(i,l,min(r,l+2019)){
        rep1(j,i+1,min(r+1,i+2019)){
            //cout<< i<<" "<<j << endl;
            m=min(m,(i%2019)*(j%2019)%2019);
        }
    }
    cout<< m << endl;
}
   

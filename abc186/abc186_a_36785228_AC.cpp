/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc186/submissions/36785228
 * Submitted at: 2022-11-26 06:37:30
 * Problem URL: https://atcoder.jp/contests/abc186/tasks/abc186_a
 * Result: AC
 * Execution Time: 6 ms
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
    int n,w,sum=0,cnt=0;
    cin>>n>>w;
    while(sum<=n){
        sum+=w;
        cnt++;
    }
    cout<< cnt-1 << endl;
}
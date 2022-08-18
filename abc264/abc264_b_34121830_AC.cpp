/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/34121830
 * Submitted at: 2022-08-18 06:19:31
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph=vector<vector<int>>
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

int main() {
    int r,c;
    cin>>r>>c;
    if(max(abs(8-r),abs(8-c))%2) cout<<"black"<<endl;
    else cout<<"white"<<endl;
    return 0;

}
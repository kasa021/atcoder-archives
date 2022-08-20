/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc146/submissions/34170815
 * Submitted at: 2022-08-20 12:34:54
 * Problem URL: https://atcoder.jp/contests/arc146/tasks/arc146_a
 * Result: WA
 * Execution Time: 83 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep1(i, n) for (int i = 0; i < (int)(n); i++)
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int main() {
    int n;
    cin>>n;
    string s[n];
    rep1(i,n) cin>>s[i];
    sort(s,s+n);
    string t;
    t=s[n-1]+s[n-2]+s[n-3];
    cout<<t<<endl;
    return 0;
}
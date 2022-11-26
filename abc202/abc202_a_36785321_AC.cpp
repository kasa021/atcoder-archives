/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc202/submissions/36785321
 * Submitted at: 2022-11-26 06:41:24
 * Problem URL: https://atcoder.jp/contests/abc202/tasks/abc202_a
 * Result: AC
 * Execution Time: 8 ms
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
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    sum=(7-a)+(7-b)+(7-c);
    cout<< sum << endl;
}
   

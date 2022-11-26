/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/36785475
 * Submitted at: 2022-11-26 06:49:23
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_a
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
    int a,b,c;
    cin>>a>>b>>c;
    if(a*a+b*b<c*c)cout<< "Yes" << endl;
    else cout<< "No" << endl;
}
   

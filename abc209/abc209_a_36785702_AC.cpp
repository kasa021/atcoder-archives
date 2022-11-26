/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc209/submissions/36785702
 * Submitted at: 2022-11-26 07:00:12
 * Problem URL: https://atcoder.jp/contests/abc209/tasks/abc209_a
 * Result: AC
 * Execution Time: 7 ms
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
    int a,b;
    cin>>a>>b;
    if(a>b) cout<< 0 << endl;
    else cout<< b-a+1 << endl;
}
   

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc206/submissions/36785438
 * Submitted at: 2022-11-26 06:47:46
 * Problem URL: https://atcoder.jp/contests/abc206/tasks/abc206_a
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
    double n;
    cin>>n;
    n=floor(1.08*n);
    if(n<206) cout<< "Yay!" << endl;
    else if(n==206) cout<< "so-so" << endl;
    else cout<< ":(" << endl;
}
   

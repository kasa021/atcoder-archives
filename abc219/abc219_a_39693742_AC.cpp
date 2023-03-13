/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/39693742
 * Submitted at: 2023-03-13 03:32:42
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    int n;
    cin>>n;
    vector<int> score={40,70,90};
    rep(i,3){
        if(score[i]>n){
            cout<< score[i]-n << endl;
            return 0;
        }
    }
    cout<< "expert" << endl;
}
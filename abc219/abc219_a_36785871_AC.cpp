/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/36785871
 * Submitted at: 2022-11-26 07:09:34
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_a
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
    int x;
    cin>>x;
    if(x<40) cout<< 40-x << endl;
    else if(x<70) cout<< 70-x << endl;
    else if(x<90) cout<< 90-x << endl;
    else cout<< "expert" << endl;
}
   

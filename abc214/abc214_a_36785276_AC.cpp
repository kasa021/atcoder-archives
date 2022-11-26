/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc214/submissions/36785276
 * Submitted at: 2022-11-26 06:39:43
 * Problem URL: https://atcoder.jp/contests/abc214/tasks/abc214_a
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
    int n;
    cin>>n;
    if(1<=n && n<=125){
        cout<< "4" << endl;
    }else if(n<=211){
        cout<< "6" << endl;
    }else cout<< "8" << endl;
}
   

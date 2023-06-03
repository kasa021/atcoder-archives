/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41939340
 * Submitted at: 2023-06-03 12:08:02
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    int n;
    cin >> n;
    if(n<1000) cout<< n << endl;
    else if(n>=1000 && n<10000){
        cout << n - (n % 10) << endl;
    }else if(n>=10000 && n<100000){
        cout << n - (n % 100) << endl;
    }else if(n>=100000 && n<1000000){
        cout << n - (n % 1000) << endl;
    }else if(n>=1000000 && n<10000000){
        cout << n - (n % 10000) << endl;
    }else if(n>=10000000 && n<100000000){
        cout << n - (n % 100000) << endl;
    }else if(n>=100000000 && n<1000000000){
        cout << n - (n % 1000000) << endl;
    }
}
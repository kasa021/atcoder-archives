/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35066795
 * Submitted at: 2022-09-23 12:19:35
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/math_and_algorithm_o
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;


int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}
int main(){
      int a,b;
      cin>>a>>b;
      cout<< gcd(a,b) << endl;
    }
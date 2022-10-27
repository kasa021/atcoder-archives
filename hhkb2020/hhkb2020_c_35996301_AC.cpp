/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/hhkb2020/submissions/35996301
 * Submitted at: 2022-10-27 09:37:36
 * Problem URL: https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c
 * Result: AC
 * Execution Time: 334 ms
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
   int n,mi=0;
   cin>>n;
   vector<int> a(n),m(210000);
   rep(i,n) cin>>a[i];
   rep(i,n){
    m[a[i]]++;
    while(m[mi]){ mi++;}
    cout<< mi << endl;
   }
}
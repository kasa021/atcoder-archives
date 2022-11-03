/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/36167782
 * Submitted at: 2022-11-03 02:41:40
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_c
 * Result: WA
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
    string s;
    ll k;
    int idx=0;
    cin>>s>>k;
    rep(i,(int)s.size()){
        if(s[i]!='1'){
          idx=i;
          break;
        }
    }
    cout<< s[idx] << endl;
}
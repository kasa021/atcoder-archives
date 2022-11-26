/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36793572
 * Submitted at: 2022-11-26 12:01:38
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_a
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
    string s;
    int cnt=0;
    cin>>s;
    rep(i,(int)s.size()){
        if(s[i]=='v')cnt++;
        else if(s[i]=='w') cnt+=2;

    }
    cout<< cnt << endl;
}
   

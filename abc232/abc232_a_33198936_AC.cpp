/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/33198936
 * Submitted at: 2022-07-13 06:39:56
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    string s;
    cin>>s;
    cout<<(s[0]-'0')*(s[2]-'0')<<endl;
    return 0;
}
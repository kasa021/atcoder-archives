/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc045/submissions/37657645
 * Submitted at: 2022-12-31 10:09:38
 * Problem URL: https://atcoder.jp/contests/abc045/tasks/abc045_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    queue<char> qa,qb,qc;
    string s;
    cin>>s;
    rep(i,s.size()) qa.push(s[i]);
    cin>>s;
    rep(i,s.size()) qb.push(s[i]);
    cin>>s;
    rep(i,s.size()) qc.push(s[i]);
    int now=0;
    while(1){
        if(now==0){
            if(qa.empty())break;
            char t=qa.front();qa.pop();
            now=t-'a';
            //cout<< now << endl;
        }else if(now==1){
            if(qb.empty())break;
            char t=qb.front();qb.pop();
            now=t-'a';
            //cout<< now << endl;
        }else {
            if(qc.empty())break;
            char t=qc.front();qc.pop();
            now=t-'a';
            //cout<< now << endl;
        }
    }
    char ans='A'+now;
    cout<< ans << endl;
}

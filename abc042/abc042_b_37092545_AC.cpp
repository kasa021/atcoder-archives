/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc042/submissions/37092545
 * Submitted at: 2022-12-08 08:58:48
 * Problem URL: https://atcoder.jp/contests/abc042/tasks/abc042_b
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
    int n,l;
    cin>>n>>l;
    priority_queue<string,vector<string>,greater<string>> q;
    rep(i,n) {
        string s;
        cin>>s;
        q.push(s);
    }
    rep(i,n){
        string t;
        t=q.top();
        cout<<t;
        q.pop();
    }
    
}
   

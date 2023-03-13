/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/39694511
 * Submitted at: 2023-03-13 04:26:59
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_c
 * Result: AC
 * Execution Time: 111 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    string x;
    cin>>x;
    vector<int> pos(26);
    rep(i,26)pos[x[i]-'a']=i;

    int n;
    cin>>n;
    vector<string> S(n);
    rep(i,n)cin>>S[i];

    sort(all(S),[&](const string& s, const string& t){
        int len=min(s.size(),t.size());
        rep(i,len){
            if(s[i]!=t[i]){
                return pos[s[i]-'a'] < pos[t[i]-'a'];
            }
        }
        return s.size()<t.size();
    });
    for(auto v:S){
        cout<< v << endl;
    }
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41557022
 * Submitted at: 2023-05-20 12:34:38
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_c
 * Result: WA
 * Execution Time: 148 ms
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
    int n, m,counter=0;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    vector<int> a(n);
    rep(i, n) a[i] = i;
    do
    {
        vector<string> t(n);
        // cout<< counter++ << endl;
        rep(i,n){
            t[i]=s[a[i]];
            // cout<< t[i] << endl;
        }
        // cout<<endl;
        bool ok=true;
        rep(i,n-1){
            map<char, int> mp1, mp2;
            rep(j,m){
                mp1[t[i][j]]++;
                mp2[t[i+1][j]]++;
            }
            int cnt=0;
            for(auto [v,u]:mp1){
                cnt+=abs(mp2[v]-u);
                // cout<< v<<" "<<u<< endl;
                // cout<< v<<" "<<mp2[u]<<endl;
            }
            // cout<< "cnt "<<cnt << endl;
            if(cnt>=2 || cnt==0) ok=false; 
        }
        if(ok){
            cout<< "Yes" << endl;
            return 0;
        }
    } while (next_permutation(all(a)));
    cout<< "No" << endl;
}
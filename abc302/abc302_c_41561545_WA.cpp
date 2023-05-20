/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41561545
 * Submitted at: 2023-05-20 12:45:43
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_c
 * Result: WA
 * Execution Time: 31 ms
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
            vector<bool> op(m,false);
            rep(j,m){
                rep(k,m){
                    if(t[i][j]==t[i+1][k] && !op[j]){
                        op[j]=true;
                        break;
                    }
                }
            }
            int cnt=0;
            rep(j,m){
                if(!op[j])cnt++;
            }
            if(cnt!=1) ok=false;
        }
        if(ok){
            cout<< "Yes" << endl;
            return 0;
        }
    } while (next_permutation(all(a)));
    cout<< "No" << endl;
}
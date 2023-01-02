/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc224/submissions/37696373
 * Submitted at: 2023-01-02 12:27:21
 * Problem URL: https://atcoder.jp/contests/abc224/tasks/abc224_c
 * Result: AC
 * Execution Time: 16 ms
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
    int n,cnt=0;
    cin>>n;
    vector<int> x(n),y(n);
    rep(i,n) cin>>x[i]>>y[i];
    rep(i,n-2){
        rep1(j,i+1,n-1){
            rep1(k,j+1,n){
                int s,t;
                s=(y[k]-y[i])*(x[j]-x[i]);
                t=(y[j]-y[i])*(x[k]-x[i]);
                if(s!=t) cnt++;
            }
        }
    }
    cout<< cnt << endl;
}

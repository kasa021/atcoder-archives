/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc143/submissions/38750835
 * Submitted at: 2023-02-10 07:08:15
 * Problem URL: https://atcoder.jp/contests/abc143/tasks/abc143_d
 * Result: AC
 * Execution Time: 856 ms
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
    int n,ans=0;
    cin>>n;
    vector<int> len(n);
    rep(i,n) cin>>len[i];
    sort(all(len));
    for(int l=0;l<n-2;l++){
        for(int m=l+1;m<n-1;m++){
            for(int r=m+1;r<n;r++){
                if(len[m]-len[l]<len[r] && len[r]<len[l]+len[m]) ans++;
            }
        }
    }
    cout<< ans << endl;
}
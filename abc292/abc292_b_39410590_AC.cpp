/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc292/submissions/39410590
 * Submitted at: 2023-03-04 12:05:24
 * Problem URL: https://atcoder.jp/contests/abc292/tasks/abc292_b
 * Result: AC
 * Execution Time: 9 ms
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
    int n,q;
    cin>>n>>q;
    vector<int> player(109,0);
    rep(i,q){
        int c,x;
        cin>>c>>x;
        if(c==1){
            player[x]++;
        }else if(c==2){
            player[x]+=2;
        }else {
            if(player[x]>=2){
                cout<< "Yes" << endl;
            }else cout<< "No" << endl;
        }
    }
}
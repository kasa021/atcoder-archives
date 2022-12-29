/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc217/submissions/37614402
 * Submitted at: 2022-12-29 08:57:55
 * Problem URL: https://atcoder.jp/contests/abc217/tasks/abc217_d
 * Result: AC
 * Execution Time: 376 ms
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
// typedef modint1000000007 mint;
int main()
{
    int l,q;
    cin>>l>>q;
    set<int> st;
    st.insert(0);
    st.insert(l);
    rep(i,q){
        int c,x;
        cin>>c>>x;
        if(c==1){
            st.insert(x);
        }else {
            auto itr=st.lower_bound(x);
            auto itr2=prev(itr);
            cout<< *itr-*itr2 << endl;
        }
    }
}

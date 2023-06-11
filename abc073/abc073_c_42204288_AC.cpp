/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc073/submissions/42204288
 * Submitted at: 2023-06-11 15:45:55
 * Problem URL: https://atcoder.jp/contests/abc073/tasks/abc073_c
 * Result: AC
 * Execution Time: 79 ms
 */


#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    int n;
    cin >> n;
    set<int> st;
    rep(i,n){
        int a;
        cin>>a;
        // stにaがあれば削除、なければ追加
        if(st.count(a)) st.erase(a);
        else st.insert(a);
    }
    cout<<st.size()<<endl;
}
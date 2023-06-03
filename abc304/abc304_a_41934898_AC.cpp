/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41934898
 * Submitted at: 2023-06-03 12:04:09
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, string>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    int n,mn=1e9;
    cin >> n;
    vector<P> a(n);
    rep(i,n){
        string s;
        int p;
        cin>>s>>p;
        mn = min(mn, p);
        a[i]=make_pair(p,s);
    }
    int index = 0;
    rep(i,n){
        if(a[i].first==mn){
            index = i;
            break;
        }
    }
    rep(i,n){
        cout<< a[(index+i)%n].second << endl;
    }

}
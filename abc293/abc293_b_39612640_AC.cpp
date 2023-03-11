/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc293/submissions/39612640
 * Submitted at: 2023-03-11 12:14:23
 * Problem URL: https://atcoder.jp/contests/abc293/tasks/abc293_b
 * Result: AC
 * Execution Time: 66 ms
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
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n){
        int x;
        cin>>x;
        x--;
        if(a[i]==0) a[x]++;
    }
    vector<int> ans;
    rep(i,n){
        if(a[i]==0)ans.push_back(i);
    }
    cout<< ans.size() << endl;
    for(auto v:ans)cout<< v+1 << " ";
    cout<<endl;
}
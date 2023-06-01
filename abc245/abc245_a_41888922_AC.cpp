/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/41888922
 * Submitted at: 2023-06-01 09:21:57
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_a
 * Result: AC
 * Execution Time: 18 ms
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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int T=0,A=0;
    T=a*60+b;
    A=c*60+d+1;
    if(T<A){
        cout<<"Takahashi"<<endl;
    }else cout<<"Aoki"<<endl;
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc184/submissions/38735301
 * Submitted at: 2023-02-09 10:44:22
 * Problem URL: https://atcoder.jp/contests/abc184/tasks/abc184_c
 * Result: AC
 * Execution Time: 4 ms
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
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a==c && b==d){
        cout<<0<<endl;
        return 0;
    }else if(a+b==c+d || a-b==c-d || abs(a-c)+abs(b-d)<=3){
        cout<<1<<endl;
        return 0;
    }else if((a+b)%2==(c+d)%2 || abs(a-c)+abs(b-d)<=6 || abs((a+b)-(c+d))<=3 || abs((a-b)-(c-d))<=3){
        cout<<2<<endl;
        return 0;
    }else{
        cout<<3<<endl;
        return 0;
    }
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc146/submissions/38147843
 * Submitted at: 2023-01-19 04:49:10
 * Problem URL: https://atcoder.jp/contests/abc146/tasks/abc146_c
 * Result: AC
 * Execution Time: 5 ms
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

ll d(ll n){
    string s=to_string(n);
    return (ll)s.size();
}

int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll left=0,right=1e9,price=0;
    if(a*1e9+b*10<=c){
        cout<< 1000000000 << endl;
        return 0;
    }
    //cout<< right << endl;
    while(right-left>1){
        //cout<< left<<" "<<right <<" "<<price<< endl;
        ll mid=(right+left)/2;
        price=a*mid+b*d(mid);
        if(price<=c) left=mid;
        else right=mid;
    }
    cout<< left << endl;
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc112/submissions/38857319
 * Submitted at: 2023-02-13 04:38:35
 * Problem URL: https://atcoder.jp/contests/abc112/tasks/abc112_d
 * Result: AC
 * Execution Time: 8 ms
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

vector<P> enum_div(int n){
    vector<P> res;
    res.push_back(P(1,n));
    for(int i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            res.push_back(P(i,n/i));
       }
   }
return res;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<P> res=enum_div(m);
    int ans=0;
    for(auto [f,s]:res){
        if(s>=n) ans=max(ans,f);
        if(f>=n) ans=max(ans,s);
    }
    cout<< ans << endl;
    
}
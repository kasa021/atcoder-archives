/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc177/submissions/39486934
 * Submitted at: 2023-03-06 09:14:04
 * Problem URL: https://atcoder.jp/contests/abc177/tasks/abc177_e
 * Result: TLE
 * Execution Time: 2213 ms
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

vector<int> enum_div(int n){
    vector<int> res;
    //res.push_back(1);
    res.push_back(n);
    for(int i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            res.push_back(i);
            if(i*i != n){
                res.push_back(n/i);
           }
       }
   }
return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    vector<vector<int>> cnt(1000009);
    rep(i,n){
        if(a[i]==1) continue;
        vector<int> res=enum_div(a[i]);
        for(auto v:res) cnt[v].push_back(i);
    }
    bool p=true,s=true;
    rep1(i,2,1000001){
        if(cnt[i].size()>1) p=false;
        if(cnt[i].size()==n) s=false;
    }
    if(p)cout<< "pairwise coprime" << endl;
    else if(s) cout<< "setwise coprime" << endl;
    else cout<< "not coprime" << endl;
}

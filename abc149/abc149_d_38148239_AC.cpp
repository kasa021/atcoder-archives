/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc149/submissions/38148239
 * Submitted at: 2023-01-19 05:15:44
 * Problem URL: https://atcoder.jp/contests/abc149/tasks/abc149_d
 * Result: AC
 * Execution Time: 14 ms
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
int main()
{
    ll n,k,r,s,p,ans=0;
    cin>>n>>k>>r>>s>>p;
    string t;
    cin>>t;
    rep(i,k){
        ll idx=i,cr=0,cp=0,cs=0;
        string a="";
        while(idx<n){
            if(t[idx]=='r'){
                if(a=="r") a="";
                else cp++,a="r";
            }else if(t[idx]=='s'){
                if(a=="s") a="";
                else cr++,a="s";
            } else if(t[idx]=='p'){
                if(a=="p") a="";
                else cs++,a="p";
            }
            idx+=k;
        }
        //cout<< cr<<" "<<cs<<" "<<cp << endl;
        ans+=cr*r+cp*p+cs*s;
    }
    cout<< ans << endl;
}

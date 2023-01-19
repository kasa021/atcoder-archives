/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc162/submissions/38149310
 * Submitted at: 2023-01-19 06:33:42
 * Problem URL: https://atcoder.jp/contests/abc162/tasks/abc162_d
 * Result: WA
 * Execution Time: 37 ms
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
    int n;
    string s;
    cin>>n>>s;
    vector<int> r(n+9),g(n+9),b(n+9);
    rep(i,n){
        if(s[i]=='R') r[i+1]=1;
        else if(s[i]=='G')g[i+1]=1;
        else b[i+1]=1;
    }
    rep(i,n){
        r[i+1]+=r[i];
        b[i+1]+=b[i];
        g[i+1]+=g[i];
    }
    int cnt=0,ans=0;
    rep1(i,1,n){
        rep(j,n){
            if(i+j>=n || j-i<0) continue;
            if(s[j]!=s[i+j] && s[j] != s[j-i] && s[j-i] != s[j+i]){
                cnt++;
                // cout<< j-i<<" "<<j<<" "<<j+i << endl;
                // cout<< s[j-i]<<" "<<s[j]<<" "<<s[j+i] << endl;
            }
        }
    }
    rep1(i,1,n-1){
        //cout<< i << endl;
        if(s[i]=='R'){
            ans+=(g[i]-g[0])*(b[n]-b[i+1]);
            ans+=(b[i]-b[0])*(g[n]-g[i+1]);
        }else if(s[i]=='G'){
            ans+=(r[i]-r[0])*(b[n]-b[i+1]);
            ans+=(b[i]-b[0])*(r[n]-r[i+1]);
        }else {
            ans+=(r[i]-r[0])*(g[n]-g[i+1]);
            ans+=(g[i]-g[0])*(r[n]-r[i+1]);
        }
        //cout<< ans << endl;
    }
    cout<< ans - cnt<< endl;
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc050/submissions/37647895
 * Submitted at: 2022-12-31 02:38:35
 * Problem URL: https://atcoder.jp/contests/abc050/tasks/arc066_a
 * Result: AC
 * Execution Time: 32 ms
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
typedef modint1000000007 mint;
int main()
{
    int n,k;
    cin>>n;
    k=n;
    bool f=true;//even
    if(n&1)f=false,k=n+1;//odd
    vector<int> cnt(n/2+1);
    rep(i,n){
        int a;
        cin>>a;
        int l;
        l=((n-1)-a)/2;
        if(0<=l && l<(k/2)) cnt[l]++;
        else {
            cout<< 0 << endl;
            return 0;
        }
    }
    bool ok=true;
    rep(i,k/2){
        if(f){
            if(cnt[i]!=2) ok=false;
        }else {
            if(i==(k/2-1)){
                if(cnt[i]!=1) ok=false;
            }else {
                if(cnt[i]!=2) ok=false;
            }
        }
    }
    
    if(ok){
        mint ans=1;
        rep(i,k/2)  ans*=2;
        if(!f) ans/=2;
        cout<< ans.val() << endl;
    }else cout<< 0 << endl;
}

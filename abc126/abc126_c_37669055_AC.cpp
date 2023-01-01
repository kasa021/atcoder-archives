/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc126/submissions/37669055
 * Submitted at: 2023-01-01 02:08:33
 * Problem URL: https://atcoder.jp/contests/abc126/tasks/abc126_c
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
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    rep1(i,1,n+1){
        int cnt=0,l=i;
        while(l<k){
            l*=2;
            cnt++;
        }
        a[i]=cnt;
    }
    vector<int> si(n+9),bo(n+9);
    si[1]=1;
    bo[1]=a[1];
    rep1(i,2,n+1){
        int bit=1;
        rep(j,abs(a[i]-bo[i-1])){
            bit*=2;
        }
        if(a[i]<bo[i-1]){
            si[i]=1*bit+si[i-1];
        }else si[i]=bit*si[i-1]+1;
        bo[i]=max(bo[i-1],a[i]);
        //cout<< si[i]<<" "<<bo[i] << endl;
    }
    int bit=1;
    rep(i,bo[n]) bit*=2;
    double ans=(double)si[n]/bit/n;
    //cout<< si[n]<<" "<<bo[n] << endl;
    cout<< fixed<<setprecision(20)<<ans << endl;
}

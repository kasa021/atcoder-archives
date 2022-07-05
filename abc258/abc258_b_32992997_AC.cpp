/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32992997
 * Submitted at: 2022-07-05 02:13:52
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll=long long;
using graph=vector<vector<int>>;

int main() {
    int n;
    cin>>n;
    ll ans=0;
    vector<vector<ll>> a(n,vector<ll>(n));
    rep(i,n){
        rep(j,n){
            char c;
            cin>>c;
            a[i][j]=c-'0';
        }
    }
    vector<int> p={1,1,1,0,0,-1,-1,-1,},q={1,0,-1,1,-1,1,0,-1};
    rep(i,n){
        rep(j,n){
            rep(k,8){
                ll now=0;
                ll x=i,y=j;
                rep(l,n){
                    now*=10;
                    now+=a[x][y];
                    x+=p[k];
                    y+=q[k];
                    x%=n;
                    x+=n;
                    y%=n;
                    y+=n;
                    x%=n;
                    y%=n;
                }
                ans=max(ans,now);
            }
        }
    }
    cout<<ans<<endl;
}
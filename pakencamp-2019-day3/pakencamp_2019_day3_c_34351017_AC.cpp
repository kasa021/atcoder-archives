/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/pakencamp-2019-day3/submissions/34351017
 * Submitted at: 2022-08-26 13:59:56
 * Problem URL: https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_c
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int main() {
    int n,m;
    cin>>n>>m;
    ll a[n][m];
    ll ans=0;
    rep(i,n){
        rep(j,m){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            ll cnt=0;
            for(int k=0;k<n;k++){
                cnt+=max(a[k][i],a[k][j]);
            }
            ans=max(ans,cnt);
        }
    }
    cout<<ans<<endl;
}
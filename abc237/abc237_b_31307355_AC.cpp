/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/31307355
 * Submitted at: 2022-04-27 13:39:23
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_b
 * Result: AC
 * Execution Time: 188 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main(){
    ll h,w;cin>>h>>w;
    ll a[h][w];
    for(ll i=0;i<=h-1;i++){
        for(ll j=0;j<=w-1;j++){
            cin>>a[i][j];
        }
    }

    ll b[w][h];
    for(ll i=0;i<=w-1;i++){
        for(ll j=0;j<=h-1;j++){
            b[i][j]=a[j][i];
        }
    }

    for(ll i=0;i<=w-1;i++){
        for(ll j=0;j<=h-1;j++){
            cout<<b[i][j];
            if(j<h-1)cout<<" ";
            else cout<<endl;
        }
    }

    return 0;
}

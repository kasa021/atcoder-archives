/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/31992941
 * Submitted at: 2022-05-28 08:26:21
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_d
 * Result: AC
 * Execution Time: 351 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin>>n;
    vector<P> d;
    d.emplace_back(-1,0);
    int ans=0;
    rep(i,n){
        int a;
        cin>>a;
        ans++;
        if(d.back().first==a){
            d.back().second++;
        }else{
            d.emplace_back(a,1);
        }
        if(d.back().first == d.back().second){
            ans-=d.back().second;
            d.pop_back();
        }
        printf("%d\n", ans);
    }
    return 0;
}
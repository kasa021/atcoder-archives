/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc255/submissions/32403012
 * Submitted at: 2022-06-11 13:06:22
 * Problem URL: https://atcoder.jp/contests/abc255/tasks/abc255_b
 * Result: WA
 * Execution Time: 14 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using dd=double;
dd dis(dd x,dd y,dd xx,dd yy){
    dd ans=0;
    ans=sqrt((x-xx)*(x-xx)+(y-yy)*(y-yy));
    return ans;

}

int main(){
    int n,k;
    cin>>n>>k;
    vector<dd> a(k),x(n),y(n);
    rep(i,k) cin>>a[i];
    rep(i,n) cin>>x[i]>>y[i];
    vector<dd> ans(k,0);
    rep(i,k){
        rep(j,n){
          dd di=dis(x[j],x[a[i]],y[j],y[a[i]]);
          ans[i+1]=max(ans[i],di);
        }
    }
    dd p=1000000000;
    rep(i,k+1) {
        if(ans[i]!=0){
        p=min(p,ans[i]);
        }
}
  printf("%.16f",p);
}
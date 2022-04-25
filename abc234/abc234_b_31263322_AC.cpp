/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/31263322
 * Submitted at: 2022-04-25 09:00:22
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

double dis(double x1,double y1,double x2,double y2){
    double d;
    d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return d;
}
int main(){
    int n;
    cin>>n;
    double x[n],y[n];
    rep(i,n){
        cin>>x[i]>>y[i];
    }
    double ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ans=max(ans,dis(x[i],y[i],x[j],y[j]));
        }
    }
    printf("%.6f\n",ans);
    return 0;

}
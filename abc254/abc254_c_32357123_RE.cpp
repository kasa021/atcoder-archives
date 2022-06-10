/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/32357123
 * Submitted at: 2022-06-10 13:59:53
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_c
 * Result: RE
 * Execution Time: 162 ms
 */


#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=k;i++){
        if(a[i]>a[i+k]){
            int tmp=a[i];
            a[i]=a[i+k];
            a[i+k]=tmp;
        }
    }
    bool flag=true;
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]){
            flag=false;
        }
        if(flag==false) break;
    }

    if(flag) {cout<<"Yes"<<endl;
    }else {cout<<"No"<<endl;} 
    return 0;
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/32357448
 * Submitted at: 2022-06-10 14:20:58
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_c
 * Result: AC
 * Execution Time: 79 ms
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
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    rep(r,k){
        vector<int> b;
        for(int i=r;i<n;i+=k){
            b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        for(int i=r;i<n;i+=k){
            a[i]=b[i/k];
        }
    }

    vector<int> tmp=a;
    sort(tmp.begin(),tmp.end());
    if(a==tmp) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
    
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/34668737
 * Submitted at: 2022-09-07 06:58:55
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_c
 * Result: AC
 * Execution Time: 195 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> p(n);
    rep(i,n){
        int a,b,c;
        cin>>a>>b>>c;
        p[i]=a+b+c;
    }
    vector<int> q=p;
    sort(q.begin(),q.end());
    reverse(q.begin(),q.end());
    int ki=q[k-1];
    rep(i,n){
        if(ki-p[i]<=300)cout<<"Yes"<<endl;
        else cout<< "No" << endl;
    }
}
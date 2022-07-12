/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33184824
 * Submitted at: 2022-07-12 10:13:06
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_a
 * Result: WA
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    int n,m,x,t,d;
    cin>>n>>m>>x>>t>>d;
    if(x<=m) cout<<t<<endl;
    else{
        int a=x-m;
        for(int i=0;i<a;i++){
            t-=a;
        }
        cout<<a<<endl;
    }
    return 0;
}
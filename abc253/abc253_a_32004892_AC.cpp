/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32004892
 * Submitted at: 2022-05-28 12:05:10
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=b&&b<=c||c<=b&&b<=a) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
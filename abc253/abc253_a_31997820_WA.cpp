/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/31997820
 * Submitted at: 2022-05-28 12:01:21
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_a
 * Result: WA
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
    if(b==(a+c)/2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
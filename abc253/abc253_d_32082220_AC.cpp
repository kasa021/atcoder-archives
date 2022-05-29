/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32082220
 * Submitted at: 2022-05-29 11:46:09
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_d
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;

ll sum(ll a){
    return a*(a+1)/2;
}

ll lcd(ll a,ll b){
    if(b!=0) return lcd(b,a%b);
    else return a;
}

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    cout<<sum(n)-a*sum(n/a)-b*sum(n/b)+a*b/lcd(a,b)*sum(n/(a*b/lcd(a,b)))<<endl;
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36823649
 * Submitted at: 2022-11-26 13:24:53
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_d
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;


double f(double a,double b,ll n){
    return a/(sqrt(1+n))+n*b;
}

int main() {
    double a,b;
    cin>>a>>b;
    ll r=1e18,l=0;

    int cnt=1000000;
    ll c1=r,c2=l;
    while(abs(c1-c2)>1){
        //cout<< c1<<" "<<c2 << endl;
        c1=(l*2+r)/3;
        c2=(l+r*2)/3;
        if(f(a,b,c1)>f(a,b,c2)) l=c1;
        else r=c2;
    }

    double ans=min(f(a,b,c1),f(a,b,c2));
    ans=min(f(a,b,0),ans);
    cout << fixed << setprecision(20) << ans << endl;
}
   

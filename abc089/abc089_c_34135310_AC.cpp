/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc089/submissions/34135310
 * Submitted at: 2022-08-19 02:02:46
 * Problem URL: https://atcoder.jp/contests/abc089/tasks/abc089_c
 * Result: AC
 * Execution Time: 36 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

int main() {
    int n;
    cin>>n;
    string s[n];
    ll m=0,a=0,r=0,c=0,h=0;
    rep(i,n) {
        cin>>s[i];
        if(s[i][0]=='M') m++;
        if(s[i][0]=='A') a++;
        if(s[i][0]=='R') r++;
        if(s[i][0]=='C') c++;
        if(s[i][0]=='H') h++;
    }
    ll ans=m*(a*(r+c+h)+r*(c+h)+c*h)+a*(r*(c+h)+c*h)+r*c*h;
    cout<<ans<<endl;
    
}
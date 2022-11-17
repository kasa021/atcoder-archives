/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc131/submissions/36558177
 * Submitted at: 2022-11-17 13:46:37
 * Problem URL: https://atcoder.jp/contests/abc131/tasks/abc131_c
 * Result: AC
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}

int lcm(int a, int b) {
    return a/gcd(a,b)*b;
}

int main(){
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      cout<<(b-a+1)-(b/c-(a-1)/c)-(b/d-(a-1)/d)+(b/(lcm(c,d))-(a-1)/(lcm(c,d)))<<endl;
    }

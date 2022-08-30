/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc205/submissions/34453127
 * Submitted at: 2022-08-30 03:27:08
 * Problem URL: https://atcoder.jp/contests/abc205/tasks/abc205_a
 * Result: AC
 * Execution Time: 5 ms
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

int main() {
    double a,b;
    cin>>a>>b;
    if(b==0) cout<<'0'<<endl;
    else{
       double ans=a*b/100;
       printf("%.10f\n",ans);
    }
}
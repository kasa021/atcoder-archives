/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/34430611
 * Submitted at: 2022-08-28 15:24:32
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_e
 * Result: AC
 * Execution Time: 6 ms
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
    int n;
    cin>>n;
    double ans=0;
    rep(i,n){
        double now =0;
        for(int j=1;j<=6;j++){
            now+=max(double(j),ans);
        }
        ans=now/6;
    }
    printf("%.10f\n",ans);
    
}
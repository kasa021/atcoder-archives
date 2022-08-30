/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/34453285
 * Submitted at: 2022-08-30 03:39:59
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_b
 * Result: AC
 * Execution Time: 8 ms
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
    int sum=0;
    cin>>n;
    int a[n];
    rep(i,n) cin>>a[i];
    rep(i,n){
        if(a[i]>10){
            sum+=(a[i]-10);
        }
    }
    cout<<sum<<endl;
}
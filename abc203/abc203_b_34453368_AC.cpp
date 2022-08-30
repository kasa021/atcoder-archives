/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc203/submissions/34453368
 * Submitted at: 2022-08-30 03:47:21
 * Problem URL: https://atcoder.jp/contests/abc203/tasks/abc203_b
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
    int n,k;
    cin>>n>>k;
    int sum=0;
    rep1(i,1,n+1){
        rep1(j,1,k+1){
            sum+=(i*100);
            sum+=j;
        }
    }
  cout<<sum<<endl;
}
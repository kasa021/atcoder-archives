/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc206/submissions/34452984
 * Submitted at: 2022-08-30 03:16:23
 * Problem URL: https://atcoder.jp/contests/abc206/tasks/abc206_b
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

int main() {
    ll n,sum=0;
    cin>>n;
    ll i=0;
    while(n>sum){
        sum+=i;
        i++;
    }
    cout<<i-1<<endl;
}
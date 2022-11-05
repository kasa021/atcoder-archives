/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36234256
 * Submitted at: 2022-11-05 12:15:05
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_c
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
    cin>>n;
    int cnt=0;
    vector<int> p(n);
    rep(i,n) cin>>p[i];
    do{
        if(cnt==1){
        rep(i,n){
            cout<<p[i]<<" ";
        }
        cout<<endl;
        return 0;
        }
        cnt++;
       }while(prev_permutation(all(p)));
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc171/submissions/36303090
 * Submitted at: 2022-11-07 08:31:05
 * Problem URL: https://atcoder.jp/contests/abc171/tasks/abc171_d
 * Result: AC
 * Execution Time: 216 ms
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
    ll sum=0;
    vector<int> a(n);
    vector<int> num(100009,0);
    rep(i,n){
        cin>>a[i];
        sum+=a[i];
        num[a[i]]++;
    }
    //cout<< "ans" << endl;
    int q;
    cin>>q;
    rep(i,q){
        int b,c;
        cin>>b>>c;
        sum+=num[b]*(c-b);
        num[c]+=num[b];
        num[b]=0;
        cout<< sum << endl;
    }
}
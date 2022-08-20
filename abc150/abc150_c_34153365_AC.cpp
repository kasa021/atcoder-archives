/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc150/submissions/34153365
 * Submitted at: 2022-08-20 03:13:06
 * Problem URL: https://atcoder.jp/contests/abc150/tasks/abc150_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep1(i, n) for (int i = 0; i < (int)(n); i++)
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int main() {
    int n;
    cin>>n;
    vector<int> p(n),q(n);
    rep(i,0,n) cin>>p[i];
    rep(i,0,n) cin>>q[i];
    int a=0,b=0;
    do{
        a++;
    }while(next_permutation(all(p)));
    do{
        b++;
    }while(next_permutation(all(q)));
    cout<<abs(a-b)<<endl;
    
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc131/submissions/36843047
 * Submitted at: 2022-11-27 07:02:32
 * Problem URL: https://atcoder.jp/contests/abc131/tasks/abc131_d
 * Result: AC
 * Execution Time: 105 ms
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
    int n,now=0;
    cin>>n;
    vector<P> time(n);
    rep(i,n){
        int a,b;
        cin>>a>>b;
        time[i]=P(b,a);
    }
    sort(all(time));
    bool f=true;
    rep(i,n){
        auto [p,q]=time[i];
        now+=q;
        if(now>p) f=false;
    }
    cout << (f ? "Yes" : "No") << endl;
}
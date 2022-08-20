/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc146/submissions/34172999
 * Submitted at: 2022-08-20 12:49:54
 * Problem URL: https://atcoder.jp/contests/arc146/tasks/arc146_a
 * Result: WA
 * Execution Time: 63 ms
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
    int a[n];
    rep(i,n) cin>>a[i];
    sort(a,a+n);
    int size;
    string s,ss,sss;
    int x=a[n-1],y=a[n-2],z=a[n-3];
    s=to_string(x);ss=to_string(y);sss=to_string(z);
    cout<<s+ss+sss<<endl;
    
}
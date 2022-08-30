/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc203/submissions/34453323
 * Submitted at: 2022-08-30 03:43:17
 * Problem URL: https://atcoder.jp/contests/abc203/tasks/abc203_a
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
    int a,b,c;
    cin>>a>>b>>c;
    if(a!=b&&b!=c&&c!=a){
        cout<<"0"<<endl;
    }else if(a==b){
        cout<<c;
    }else if(b==c){
        cout<<a;
    }else cout<<b;
}
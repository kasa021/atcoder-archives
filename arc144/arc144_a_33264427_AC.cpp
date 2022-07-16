/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc144/submissions/33264427
 * Submitted at: 2022-07-16 12:34:01
 * Problem URL: https://atcoder.jp/contests/arc144/tasks/arc144_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>
//#include <atcoder/all>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    int n,m;
    cin>>n;
    int a=n%4;
    int w=(n-a)/4;
    m=w*4*2+a*2;
    cout<<m<<endl;
    string s;
    if(a!=0) s=a+'0';
    for(int i=0;i<w;i++){
        s+='4';
    }
    cout<<s<<endl;
    return 0;
}
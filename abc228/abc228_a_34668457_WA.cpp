/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/34668457
 * Submitted at: 2022-09-07 06:42:09
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_a
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    int s,t,x;
    cin>>s>>t>>x;
    if(s<t){
        if(s<=x&&x<=t){
            cout<<"Yes"<<endl;
        }else cout<< "No" << endl;
    }else {
        if(s<=x&&x<=23||0<=x&&x<=t){
            cout<< "Yes" << endl;
        }else cout<< "No" << endl;
    }
}
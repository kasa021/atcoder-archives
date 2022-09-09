/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/34701563
 * Submitted at: 2022-09-09 06:01:17
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_b
 * Result: AC
 * Execution Time: 7 ms
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
    string s[4];
    rep(i,4) cin>>s[i];
    string t[4]={"H","2B","3B","HR"};
    vector<bool> a(4,false);
    rep(i,4){
        rep(j,4){
            if(s[i]==t[j]) a[j]=true;
        }
    }
    if(a[0]&&a[1]&&a[2]&&a[3]) cout<< "Yes" << endl;
    else cout<< "No" << endl;
}
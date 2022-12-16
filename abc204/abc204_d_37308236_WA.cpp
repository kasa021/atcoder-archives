/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/37308236
 * Submitted at: 2022-12-16 17:44:08
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_d
 * Result: WA
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
    int n,sum1=0,sum2=0;
    cin>>n;
    vector<int> t(n);
    rep(i,n) cin>>t[i];
    sort(all(t));
    rep(i,n){
        if(sum1==sum2) sum1+=t[n-1-i];
        else {
            if(sum1>sum2) sum2+=t[n-1-i];
            else sum1+=t[n-i-1];
        }
    }
    cout<< max(sum1,sum2) << endl;
    //cout<< sum1<<" "<<sum2 << endl;
    }

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc012/submissions/41304996
 * Submitted at: 2023-05-11 10:04:52
 * Problem URL: https://atcoder.jp/contests/arc012/tasks/arc012_2
 * Result: AC
 * Execution Time: 5 ms
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
    int n;
    double Vtaka,Vkame,xtaka=0,xkame,prev=0;;
    cin>>n>>Vtaka>>Vkame>>xkame;
    while(n--){
        prev=xkame;
        xkame+=((xkame-xtaka)/Vtaka)*Vkame;
        xtaka=prev;
    }
    cout<<fixed<< setprecision(10) << xkame-xtaka << endl;
    }
    
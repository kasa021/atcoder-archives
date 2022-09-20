/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35018506
 * Submitted at: 2022-09-20 15:05:46
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ch
 * Result: AC
 * Execution Time: 100 ms
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
      int n,ans=0;
      cin>>n;
      vector<vector<int>> z(1509,vector<int>(1509));
      rep(i,n){
        int a,b,c,d;
        cin>>a>>b>>c>>d;      
        z[a][b]++;
        z[a][d]--;
        z[c][b]--;
        z[c][d]++;
    }
    rep1(i,1,1505) rep1(j,1,1505) z[i][j]+=z[i][j-1];
    rep1(i,1,1505) rep1(j,1,1505) z[j][i]+=z[j-1][i];
    rep(i,1505) rep(j,1505) {
        if(z[i][j]>0) ans++;
        
    }

    // rep(i,10){
    //     rep(j,10){
    //         cout<<z[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<< ans << endl;
    }
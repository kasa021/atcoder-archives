/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35014468
 * Submitted at: 2022-09-20 11:56:00
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_i
 * Result: AC
 * Execution Time: 254 ms
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
      int h,w,n;
      cin>>h>>w>>n;
      vector<vector<int>> z(1509,vector<int>(1509));
      rep(i,n){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        //a--,b--,c--,d--;
        z[a][b]++;
        z[a][d+1]--;
        z[c+1][b]--;
        z[c+1][d+1]++;
      }
      rep1(i,1,1509){
        rep1(j,1,1509){
            z[i][j]+=z[i][j-1];
        }
      }
      rep1(i,1,1509){
        rep1(j,1,1509){
            z[j][i]+=z[j-1][i];
        }
      }

      rep1(i,1,h+1){
        rep1(j,1,w+1){
            cout<< z[i][j]<<" ";
        }
        cout<<endl;
      }

    }
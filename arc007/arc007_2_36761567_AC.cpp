/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc007/submissions/36761567
 * Submitted at: 2022-11-24 16:26:56
 * Problem URL: https://atcoder.jp/contests/arc007/tasks/arc007_2
 * Result: AC
 * Execution Time: 11 ms
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
      int n,m;
      cin>>n>>m;
      vector<int> a(n+1);
      rep(i,n+1) a[i]=i;
      rep(i,m){
        int c;
        cin>>c;
        rep(j,n+1){
            if(a[j]==c){
                a[j]=a[0];
                a[0]=c;
            }
        }
      }
      rep1(i,1,n+1) cout<< a[i] << endl;
    }
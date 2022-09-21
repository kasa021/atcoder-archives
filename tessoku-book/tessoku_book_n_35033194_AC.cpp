/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35033194
 * Submitted at: 2022-09-21 13:04:14
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_n
 * Result: AC
 * Execution Time: 87 ms
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
      int n,k;
      cin>>n>>k;
      vector<int> a(n),b(n),c(n),d(n);
      rep(i,n) cin>>a[i];
      rep(i,n) cin>>b[i];
      rep(i,n) cin>>c[i];
      rep(i,n) cin>>d[i];
      vector<int> ab(n*n+10,100000009),cd(n*n+10,100000009);
      int s=0;
      rep(i,n){
        rep(j,n){
            ab[i*n+j]=a[i]+b[j];
        }
      }
      rep(i,n){
        rep(j,n){
            cd[i*n+j]=c[i]+d[j];
        }
      }
      sort(all(cd));
      //sort(all(ab));
      rep(i,n*n){
        int p=lower_bound(all(cd),k-ab[i])-cd.begin();
        //cout<<cd[p]<<" "<<k-ab[i]<<endl;
        if(cd[p]==k-ab[i]&&p<=n*n) {
            cout<< "Yes" << endl;
            return 0;
        }
      }
      cout<< "No" << endl;
    }
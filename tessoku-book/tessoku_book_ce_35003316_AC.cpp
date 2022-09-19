/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tessoku-book/submissions/35003316
 * Submitted at: 2022-09-19 18:48:39
 * Problem URL: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_ce
 * Result: AC
 * Execution Time: 205 ms
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
      cin>>n;
      vector<int> a(n),b(n);
      for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]==1) b[i]=0;
        else b[i]=1;
      }
      int q; cin>>q;
      vector<int> csa(n + 1);
      csa[0] = 0;
      for (int i = 0; i < n; i++)
          csa[i + 1] = csa[i] + a[i];

     vector<int> csb(n + 1);
     csb[0] = 0;
     for (int i = 0; i < n; i++)
         csb[i + 1] = csb[i] + b[i];
     //cout<< csa[5] << endl;
      

      rep(i,q){
        int l,r;
        cin>>l>>r;
        //l--;r--;
        if(csb[r]-csb[l-1]<(csa[r]-csa[l-1])) cout<< "win" << endl;
        else if(csb[r]-csb[l-1]==(csa[r]-csa[l-1])) cout<< "draw" << endl;
        else cout<< "lose" << endl;

       // cout<<"atari "<<csa[r]-csa[l-1]<<" hazure "<<csb[r]-csb[l-1]<<endl;
      }
      
    }
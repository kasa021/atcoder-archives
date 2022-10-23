/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc084/submissions/35918763
 * Submitted at: 2022-10-23 08:48:16
 * Problem URL: https://atcoder.jp/contests/abc084/tasks/abc084_d
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


bool isprime(int x){
    int i;
    for(int i=2;i*i<=x;i++){
       if(x%i==0) return false;
    }
    return true;
}

int main(){
      int q;
      cin>>q;
      vector<int> odd(100009,0);
      for(int i=3;i<100001;i+=2){
        if(isprime(i)&&isprime((i+1)/2)) odd[i]++;
      }
      for(int i=3;i<100001;i++){
        odd[i]+=odd[i-1];
      }
    //   rep(i,15)cout<<odd[i]<<" ";
    //   cout<<endl;
      //cout << (isprime(7) ? "Yes" : "No") << endl;
      rep(i,q){
        int l,r;
        cin>>l>>r;
        cout<< odd[r]-odd[l-1] << endl;
      }
    }

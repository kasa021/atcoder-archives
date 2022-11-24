/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc039/submissions/36762284
 * Submitted at: 2022-11-24 18:28:03
 * Problem URL: https://atcoder.jp/contests/abc039/tasks/abc039_c
 * Result: WA
 * Execution Time: 10 ms
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
      string s;
      int r=0;
      vector<int> a(20,0);
      vector<string> b(12);
      b[0]="Do";
      b[1]="Do";
      b[2]="Re";
      b[3]="Re";
      b[4]="Mi";
      b[5]="Fa";
      b[6]="Fa";
      b[7]="So";
      b[8]="So";
      b[9]="La";
      b[10]="La";
      b[11]="Si";
      cin>>s;
      rep(i,10){
        if(s[i]=='W' &&s[i+1]=='B'&& s[i+2]=='W' &&s[i+3]=='B'&&s[i+4]=='W' &&s[i+5]=='W'&& s[i+6]=='B' &&s[i+7]=='W'){
            r=i;
            break;
        }
      }
      int j=0;
      for(int i=r;i>=0;i--){
        a[i]=j;
        j--;
        if(j<0) j+=12;
      }
      //cout<< a[0] << endl;
      cout<< b[a[0]] << endl;
      //rep(i,20) cout<< a[i] << " ";

      //cout<<endl; 
    }
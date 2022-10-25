/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/35967082
 * Submitted at: 2022-10-25 16:14:14
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_c
 * Result: WA
 * Execution Time: 26 ms
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
      string a;
      cin>>a;
      int i=0,j=(int)a.size()-1;
      bool f=true;
      while(i<j){
        if(a[i]==a[j]) i++,j--;
        else if(a[i]=='a') i++;
        else if(a[j]=='a') j--;
        else {
            f=false;
            break;
        }
      }
      cout << (f ? "Yes" : "No") << endl;
    }

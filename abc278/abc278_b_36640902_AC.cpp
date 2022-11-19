/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36640902
 * Submitted at: 2022-11-19 13:32:25
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_b
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
      int h,m;
      cin>>h>>m;
      
      while(true){
        int p,q;
        p=(h/10)*10+m/10;
        q=(h%10)*10+m%10;
        //cout<< p<<" "<<q << endl;
        if(0<=p && p<24 && 0<=q && q<60){
            cout<< h<<" "<<m << endl;
            return 0;
        }else {
            m++;
            if(m==60){
                m=0;
                h++;
                if(h==24) h=0;
            }
        }
      }
    
    
      
    }
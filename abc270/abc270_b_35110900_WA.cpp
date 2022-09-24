/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35110900
 * Submitted at: 2022-09-24 12:29:34
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_b
 * Result: WA
 * Execution Time: 8 ms
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
      int x,y,z;
      cin>>x>>y>>z;
      if(x>0&&y<0||x<0&&y>0){
        cout<<abs(x)<<endl;
      }else if(x>0&&y>0){
        if(y>x){
            cout<< "-1" << endl;
        }else {
            if(y<z){
                cout<< "-1" << endl;
            }else if(z>0){
                cout<< abs(x) << endl;
            }else {
                cout<< abs(x)+abs(z)*2 << endl;
            }
        }
      }else if(x<0&&y<0){
        if(y<x){
            cout<< "-1" << endl;
        }else {
            if(y>z){
                cout<< "-1" << endl;
            }else if(z<0){
                cout<< abs(x) << endl;
            }else {
                cout<< abs(x)+abs(z)*2 << endl;
            }
        }
      }
    }
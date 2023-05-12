/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/41329444
 * Submitted at: 2023-05-12 16:39:10
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_b
 * Result: AC
 * Execution Time: 32 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)


int main(){
    int n;
    string s;
    cin>>n>>s;
    rep1(i,1,n){  // i=1,2,3,...,n-1
        rep(j,n-i+1){ //j=0,1,2,...,n-i
            if(s[j]==s[j+i]){
                cout<<j<<endl;
                break;  // 最大値を出力したら終了
            }else if(j==n-i){
                cout<<j<<endl;
            }
        }
    }
    return 0;
    }
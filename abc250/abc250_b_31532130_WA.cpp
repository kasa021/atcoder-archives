/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31532130
 * Submitted at: 2022-05-08 12:39:59
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_b
 * Result: WA
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<string> s(109);

    for(int i = 1;i<=n*a;i++){
        int k=0;
        int p=0;
        if(0<=p && p<a){
        for(int j = 1;j<=n*b;j++){
            if(p==a) break;
            if(k!=b) {
                s.push_back(".");
                k++;
            }
            else if(k==b){
                 s.push_back("#");
                 k=0;
            }
            p++;
           
        }
        }
        if(a<=p && p<2*a){
        for(int j = 1;j<=n*b;j++){
            if(p==a) break;
            if(k!=b) {
                s.push_back("#");
                k++;
            }
            else if(k==b){
                 s.push_back(".");
                 k=0;
            }
            p++;
            
        }

        }
        if(p==2*a) p=0;
        
    }
    for(int i=1;i<=a*n;i++){
    printf("%s\n",s[i]);
    }
    return 0;
}
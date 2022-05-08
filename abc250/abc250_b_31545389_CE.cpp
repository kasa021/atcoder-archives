/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31545389
 * Submitted at: 2022-05-08 13:29:53
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_b
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<string> p(1),q(1);
    int k =0;
    for(int i = 1;i<=n*b;i++){

        if(0<=k&&k<b){
            p[0].push_back('.');
                k++;
        }
        else if(b<=k&&k<2*b){
                 p[0].push_back('#');
                 k++;
            }
            if(k==2*b) k=0;
    }
    int d=0;
    for(int i = 1;i<=n*b;i++){

        if(0<=d&&d<b){
            q[0].push_back('#');
                d++;
        }
        else if(b<=d&&d<2*b){
                 q[0].push_back('.');
                 d++;
            }
            if(d==2*b) d=0;
    }
     int w = 0;
    for(int i=1;i<=a*n;i++){
        if(0<=w&&w<a) {
            cout<<p[0]<<endl;
            w++;
          //cout<<w;
        }
        else if(a<=w&&w<2*a){
            cout<<q[0]<<endl;
            w++;
          //cout<<w;
        }
        if(w==2*a) w=0;
    
    return 0;

}
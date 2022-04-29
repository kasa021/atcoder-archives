/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/31333229
 * Submitted at: 2022-04-29 01:46:42
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;

int main(){
    int v,a,b,c;
    cin>>v>>a>>b>>c;
    while(v>=0){
        if(v-a<0){
            cout<<"F"<<endl;
            break;
        }
        v-=a;
        if(v-b<0){
            cout<<"M"<<endl;
            break;
        }
        v-=b;
        if(v-c<0){
            cout<<"T"<<endl;
            break;
        }
        v-=c;
    }
    return 0;
}
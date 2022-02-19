/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc239/submissions/29471868
 * Submitted at: 2022-02-19 13:37:19
 * Problem URL: https://atcoder.jp/contests/abc239/tasks/abc239_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;

int A(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    cin>>a>>b>>c>>d;

    int p[101][101];
    int q[101];

    for(int i=a;i<=b;i++){
        q[i]=0;
        for(int j=c;c<=d;j++){
            p[i][j] =A(i+j);
            q[i]+=p[i][j];
        }
    }

    for(int i=a;i<=b;i++){
        if(q[i]==0) cout<<"Takahashi"<<endl;

    }
    int x=0;

    for(int i=a;i<=b;i++){
         x+=q[i];
    }

    if(x==(b-a+1)) cout<<"Aoki"<<endl;

    return 0;
    

}

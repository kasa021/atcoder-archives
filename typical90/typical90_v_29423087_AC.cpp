/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29423087
 * Submitted at: 2022-02-19 10:20:35
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_v
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

long long a,b,c;

long long gcd(long long x, long long y){
    if(y==0) return x;
    return gcd(y,x%y);
}

int main(){
       cin>>a>>b>>c;
       long long s=gcd(a,gcd(b,c));
       cout<<(a/s-1)+(b/s-1)+(c/s-1)<<endl;
       return 0;
}
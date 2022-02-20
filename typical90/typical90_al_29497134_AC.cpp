/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29497134
 * Submitted at: 2022-02-20 08:24:43
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_al
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}

long long a,b;
long long l,ans;
long long x=1000000000000000000LL;
int main(){
    cin>>a>>b;
    
    l= a/gcd(a,b);

    if(b<=x/l) cout<<l*b<<endl;
    else cout<<"Large"<<endl;

    
return 0;
}

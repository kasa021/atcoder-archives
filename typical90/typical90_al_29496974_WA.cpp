/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29496974
 * Submitted at: 2022-02-20 08:18:49
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_al
 * Result: WA
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}

long long a,b;
long long l,ans;
int main(){
    cin>>a>>b;
    
    l= gcd(a,b);

    a=a/l; b=b/l;

    if(a*b*l>1000000000000000000) cout<<"Large"<<endl;
    else cout<<a*b*l<<endl;

return 0;
}

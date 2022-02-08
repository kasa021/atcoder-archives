/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29165440
 * Submitted at: 2022-02-08 12:23:21
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_q
 * Result: AC
 * Execution Time: 38 ms
 */

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){ //最大公約数を求める関数
    while(a>=1&&b>=1){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a>=1) return a; //aが1以上の時
    else return b;
}

long long lcm(long long a, long long b){ //最小公倍数を求める関数
    return (a/gcd(a,b))*b;
}



int main(){
    long long n,m;
    vector<long long> a(1000000);
    

    cin>>n;
    
    for (long long i=0;i<=n;i++) cin>>a[i];
  
    m=lcm(a[0],a[1]);
    for(long long i=2;i<n;i++) m=lcm(m,a[i]);

    cout<<m<<endl;  
    
}
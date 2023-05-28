/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc044/submissions/41789381
 * Submitted at: 2023-05-28 03:27:48
 * Problem URL: https://atcoder.jp/contests/arc044/tasks/arc044_a
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)

bool prime_like(int n){
    if(n==1) return false; // 1は素数ではない

    bool ok=true;
    for(int i=2;i*i<=n;i++){  // 素数判定
        if(n%i==0){
            ok=false;
            break;
        }
    }
    if(ok) return true; // 素数
    else {              // 合成数の時
        int tmp=0,sum=0; // 一桁目と各桁の和
        tmp=n%10;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        if(tmp!=5 && sum%3!=0) return true; // 一桁目が5でなく、各桁の和が3の倍数でない時
        else return false;                  // それ以外の時(素数にならない時
    }
}

int main() {
    int n;
    cin>>n;
    cout<< (prime_like(n) ? "Prime" : "Not Prime")<<endl;
}

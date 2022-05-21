/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/31850465
 * Submitted at: 2022-05-21 12:20:08
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    int n;
    cin>>n;
    char s;
    s='a';
    while(n-97>0){
        s++;
        n--;
    }
    cout<<s<<endl;

    
}
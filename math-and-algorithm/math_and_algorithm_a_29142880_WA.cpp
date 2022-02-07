/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29142880
 * Submitted at: 2022-02-07 07:48:34
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_a
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x,y;
    int a,i;

    a=0;
    cin>>n>>x>>y;
    

    for (i=1;i<=n;i++){
        if(i%x==0||i%y==0)
           a++;
    }

    

    cout<<a<<endl;

}
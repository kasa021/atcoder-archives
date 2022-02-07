/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29142911
 * Submitted at: 2022-02-07 07:50:37
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_g
 * Result: AC
 * Execution Time: 18 ms
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
    return 0;
}
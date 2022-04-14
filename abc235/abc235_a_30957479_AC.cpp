/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/30957479
 * Submitted at: 2022-04-14 05:13:00
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    int x,y,z;

    x=a%10;
    y=(a%100-x)/10;
    z=(a-x-10*y)/100;
    
    

    int ans;
    ans=(x+y+z)*100+(x+y+z)*10+x+y+z;

    cout<<ans<<endl;
    return 0;
}
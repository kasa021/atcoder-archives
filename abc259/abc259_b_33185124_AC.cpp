/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33185124
 * Submitted at: 2022-07-12 10:32:45
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>
#include<math.h>
#define pi 3.14159265359
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using bb=double;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    bb a,b,d;
    cin>>a>>b>>d;
    bb A,B;
    A=a*cos(pi*d/180)-b*sin(pi*d/180);
    B=a*sin(pi*d/180)+b*cos(pi*d/180);

    printf("%.10f %.10f",A,B);
    return 0;

}
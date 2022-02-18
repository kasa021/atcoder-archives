/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29406724
 * Submitted at: 2022-02-18 13:23:35
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_g
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    long long n, q;
    long long a[300009];
    long long b[300009];
    int c=0;


    cin>>n;
    for(long long i=1;i<=n;i++)  cin>>a[i];
    cin>>q;
    for(long long i=0;i<=q;i++) cin>>b[i];

    sort(a+1,a+n+1);//sortする

    for(int i=1;i<=q;i++){
        int pos1=lower_bound(a+1,a+n+1,b[i]) - a //これでb[i]以上の左側のa[k]がわかるらしい。
        int px=0;py=0;

        if(pos1<=n) px=abs(b[i] - a[pos1]);
        if(pos>=2) py=abs(b[i] -a[pos1-1]);
        cout<<min(px,py)<<endl;
    }
    return 0;



    
    
}

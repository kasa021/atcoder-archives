/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29406974
 * Submitted at: 2022-02-18 13:35:48
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_g
 * Result: WA
 * Execution Time: 650 ms
 */

#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
using namespace std;

    const int INF = 2000000000;
    int  n;
    int a[300009];
    int q;
    int b[300009];
    
int main(){
    cin>>n;
    for(int  i=1;i<=n;i++)  cin>>a[i];
    cin>>q;
    for(int i=0;i<=q;i++) cin>>b[i];

    sort(a + 1, a + n + 1);//sortする

    for(int i=1;i<=q;i++){
        int pos1=lower_bound(a+1,a+n+1,b[i]) - a; //これでb[i]以上の左側のa[k]がわかるらしい。
        int px=INF, py=INF;

        if(pos1<=n) px=abs(b[i] - a[pos1]);
        if(pos1>=2) py=abs(b[i] -a[pos1-1]);
        cout<<min(px,py)<<endl;
    }
    return 0;
    
}

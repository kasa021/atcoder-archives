/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29495052
 * Submitted at: 2022-02-20 07:10:34
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_af
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
using namespace std;

int n;
int a[12][12]];
int m;
int x[1<<18];
int y[1<<18];

bool kenaku[12][12];
int ans=(1<<30);

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;i<=n;j++){
            cin>>a[i][j]; //選手iが区間jを走る時間
        }
    }
    cin>>m;
    for(int i=1;i<=m;i++) cin>>x[i]>>y[i]; //仲悪い奴
    
    vector<int> vec;
    for(int i=1;i<=n;i++) vec.push_back(i); //push_back()は末尾に要素を付け足す,今回は要素をn個にするということ
    for(int i=1;i<=m,i++){
        kenaku[x[i]][y[i]] = true;
        kenaku[y[i]][x[i]] =true;
    }

    do{
        bool flag=true;
        int sum=0;
        for(int i=0;i<n-1;i++){
            if(kenaku[vec[i]][vec[i+1]] ==true) flag=false;
        }
        for(int i=0;i<n;i++) sum+=a[vec[i]][i+1];
        if(flag==true) ans=min(ans,sum;)
    }while(next_permutation(vec.begin(),vec.end()));

    if(ans==(1<<30)) ans=-1;
    cout<<ans<<endl;
    return 0;

   
}

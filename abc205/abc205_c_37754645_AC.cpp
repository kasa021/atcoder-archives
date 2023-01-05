/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc205/submissions/37754645
 * Submitted at: 2023-01-05 14:27:56
 * Problem URL: https://atcoder.jp/contests/abc205/tasks/abc205_c
 * Result: AC
 * Execution Time: 5 ms
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int ac_minus = c%2==1&&a<0;
	int bc_minus = c%2==1&&b<0;
	
	if(ac_minus!=bc_minus){
		if(ac_minus)puts("<");
		else puts(">");
	}else{
		if(abs(a)==abs(b))puts("=");
		else if(abs(a)<abs(b) ^ ac_minus)puts("<");
		else puts(">");
	}
}
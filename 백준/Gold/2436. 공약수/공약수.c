#include<stdio.h>
int U(int a,int b){
	int r=a%b;
	if(r) U(b,r);
	else return b;
}
int main(void){
	long long int gcd=1,lcm=1,X;
	scanf("%lld %lld",&gcd,&lcm);
	X=gcd*lcm;
	long long int a=1,b=1;
	long long int ans_a=1,ans_b=1;
	long long int ans= 200000000;
	for(long long int i=1;;i++){
		a = gcd*i;
		if(a>lcm)break;
		if(X%a)continue;
		b=X/a;
		
		if(U(a,b)!=gcd)continue;
		
		if(ans>a+b){
			ans=a+b;
			ans_a=a;
			ans_b=b;
		}
		else if(ans==a+b){
			long long gap=a-b;
			if(gap<0)gap*=-1;
			long long int ans_gap = ans_a-ans_b;
			if(ans_gap>gap){
				ans_a=a;
				ans_b=b;
			}
		}
	}
	printf("%lld %lld",ans_a,ans_b);
}
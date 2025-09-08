#include <stdio.h>
#include <math.h>
int main()
{
	int N, K, W,i,cnt=0;
	double P;
	scanf("%d %d %lf %d", &N, &K, &P, &W);
	cnt = ceil(P / W);
	printf("%d", cnt);
	return 0;
}
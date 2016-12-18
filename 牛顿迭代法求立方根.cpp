#include<stdio.h>
#include<math.h>
#define min 1e-10
int main()
{
	double x1,x2,n;
	printf("请输入要求的数:");
	scanf("%lf",&n);
	x2=1;
	do
	{
		x1=x2;
		x2=(2*x1+n/(x1*x1))/3;
	}
	while(fabs(x2-x1)>min);
	printf("%lf立方根是%lf\n",n,x2);
	return 0;
}
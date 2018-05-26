#include <stdio.h>
int main()
{
	int a,b,rest,test,i;
	i=10;
	scanf("%d %d",&a,&b);
	i=a+b-1;
	rest=i-a;
	test=i-b;
	printf("%d %d",rest,test);
	return 0;
}

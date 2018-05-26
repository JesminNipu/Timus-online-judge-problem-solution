#include <stdio.h>
int main()
{
	int a,b,l=0,r=0;
	scanf("%d %d",&a,&b);
	r=2*b+40;
	l=2*a+39;
	if(l>r)
	printf("%d",l);
	else
	printf("%d",r);
	return 0;
}

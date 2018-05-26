#include <stdio.h>
int main()
{
	int a,b,res;
	scanf("%d %d",&a,&b);
	if(b%2==0)
	{
		printf("%d",((b-a)+1)/2);
	}
	else
	{
		printf("%d",((b-a)+2)/2);
	}
	return 0;
}

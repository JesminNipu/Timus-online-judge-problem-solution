#include <stdio.h>
int main()
{
	int a,p,n,k;
	scanf("%d",&n);
	
	a=n/7;
	k=a;
	p=1;
	
	while(p*(p+2*k-1)==2*n)
	{
	a=1+(n-p*(p+1)/2)/p;
		
	}
		p++;
	printf("%d %d",a,p);
	return 0;
}

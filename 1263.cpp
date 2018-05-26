#include <stdio.h>
double a[10004];
int main()
{
	int i,m,n,l,o;
	double d=0;
	scanf("%d %d",&n,&m);
	l=m;
	while(m--)
	{
		scanf("%d",&o);
		a[o]++;
  	}
	for(i=0;i<n;i++)
{
	d=(a[i]/l)*100;
	printf("%2.2lf%%\n",d);
}
	return 0;
}


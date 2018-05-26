#include <stdio.h>
int main()
{
	long int a[15001],b[15001],k,key,count=0;
	int n,i,j,m,middle;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	int low=0,high=n-1;
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
		}
	
		for(j=0;j<m;j++)
	{
	key=b[j];
		
	while(low<=high)
	{
		middle=low+high/2;
		if(key==a[middle])
		{
			count=1;
			count++;
		}
		else if(key<a[middle])
		{
			high=middle-1;
		}
		else
		low=middle+1;
		}
		
	}
	printf("%d",count);
	}


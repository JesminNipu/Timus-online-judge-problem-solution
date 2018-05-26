#include <stdio.h>
int b[1000000];
int a[15000];
int main()
{
int i,j,k,n,m,c=0,first,last,mid;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}	
scanf("%d\n",&m);
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
first=0,last=n-1;
	mid=(first+last)/2;
while(first<=last)
{
	mid=(first+last)/2;
	if(a[mid]<m)
	{
		first=mid+1;
	
	}
	else if(a[mid]==m)
{

	printf("%d",mid+1);
	break;
	}
	else
	last=mid-1;}
	return 0;
	}
	


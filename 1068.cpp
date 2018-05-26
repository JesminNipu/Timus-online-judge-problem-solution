#include <stdio.h>
#include <stdlib.h>
	long int sum[10000];
int a[10000];
int main()
{
	int i,n;
	sum[0]=1;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%d",&a[i]);}
	for(i=0;i<=n;i++){
	sum[i]+=a[i];
	printf("%ld",sum[i]);}
}

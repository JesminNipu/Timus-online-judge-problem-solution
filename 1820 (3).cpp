#include <stdio.h>
int main()
{
	int n,k,t;
	scanf("%d %d",&n,&k);
   t=((n<k)?2:(2*n%k)?(2*n/k+1):(2*n/k));
printf("%d",t);
return 0;
}

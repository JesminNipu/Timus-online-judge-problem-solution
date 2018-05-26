#include<stdio.h>
int main()
{
int a[1001],n,i,j,s=0,k=0,sum;
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-2;i++)
{
sum=0;
for(j=i;j<i+3;j++)
{
sum+=a[j];
}
if(sum>=k)
{
k=sum;
s=i+1;
}	
}
printf("%d %d",k,s+1);

return 0;
}

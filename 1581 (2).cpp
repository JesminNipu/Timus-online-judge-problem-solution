#include<stdio.h>
int a[1002];
int main()
{
int i,n,k,j;
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
k=0,j=i;
while(a[i]==a[j])
{
k++;
j++;
}
printf("%d %d",k,a[i]);
i=j;	
}

return 0;
}

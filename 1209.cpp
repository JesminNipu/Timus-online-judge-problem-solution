#include<stdio.h>
#include<math.h>
 unsigned long a[70000];
int main()
{
unsigned long i,k,n;
long double l;
scanf("%lu\n",&n);
for(i=0;i<n;i++)
{
scanf("%lu",&a[i]);
}
for(i=0;i<n;i++)
{
l=((sqrt(-7+8*a[i])-1)/ 2);
k=l;
if(l==k)
printf("1 ");
else
printf("0 ");
}
return 0;
}

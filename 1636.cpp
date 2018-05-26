#include <stdio.h>
int main()
{
int t1,t2,n,i;
int sum=0;
scanf("%d %d", &t1, &t2);
for (i=0; i<=9; i++)
{
    scanf("%d", &n);
    sum+=(n*20);
}

t2-=sum;
if (t2<t1)
{
   printf("Dirty debug :(");
}
else
{
    printf("No chance.");
}

return 0;
}

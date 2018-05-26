#include <stdio.h>
int a[101];
int main()
{
int t1,t2,n;
int c=0;
scanf("%d %d", &t1, &t2);
for (int i=0; i<=9; i++)
{
    scanf("%d", &a[i]);
    c+=(a[i]*20);
    
}
	t2-=c;

if (t2<t1)
{
   printf("No chance.");
}
else
{
    printf("Dirty debug :(");
}

return 0;
}

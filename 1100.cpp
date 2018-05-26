#include <stdio.h>
int main()
{
    int i,swap,j,n,l,sum=0,k,ara[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&ara[i][j]);
    }
    for(i=0;i<n;i++)
	{
        for(j=0;j<n-i;j++)
		{
            if(ara[j]<ara[j+1])
			{
                ara[i]=ara[i+1];
                ara[i+1]=ara[j];
                ara[j]=ara[i];
            }

            }
        }   
      for(i=0;i<n;i++)
      {
      printf("%d %d\n",ara[i][j]);	
      }

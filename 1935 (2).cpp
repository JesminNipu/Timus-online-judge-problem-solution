#include <stdio.h>
int ara[101];
int main()
{
    int i,swap,j,n,m,l,sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(ara[j]<ara[j+1]){
                swap=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=swap;
                }
            }
        }   
		  l=ara[0]*2;
		  
		  for(i=0;i<n;i++)
		  {
		  sum+=ara[i];
		  }
		 m=(l+sum)-ara[0];
		  printf("%d",m);
		  return 0;
		  }
		 

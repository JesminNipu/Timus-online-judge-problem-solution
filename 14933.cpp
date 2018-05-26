#include <stdio.h>
int main()
{
	int a,b,i,n,sum1,sum2;
		sum1=0,sum2=0;
	for(i=0;i<6;i++){
		scanf("%d",&n);

	sum1+=n;
	}
	sum2=sum1+1;
	if(sum2%2!=1){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}


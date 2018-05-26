#include <stdio.h>
int main()
{
	int m,n,sum;
	while(scanf("%d %d",&m,&n)!=EOF){
		if(m != 1 && m==(n%m)){
			printf("[:=[first]");
		}
		else
		printf("[second]=:]");
	}
	return 0;
	
}

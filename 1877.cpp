#include <stdio.h>
int main()
{
	int a,b,d;
	scanf("%d %d",&a,&b);
	if(a%2==0 || b%2==1 || a==b){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}

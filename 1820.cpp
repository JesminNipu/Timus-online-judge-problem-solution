#include <stdio.h>
int main()
{
	int n,k,t;
	scanf("%d %d",&n,&k);
	if(n<k){
		printf("2");}
		else{
			if(2*n%k==1){
			t=2*n/k+1;
			}
			else{
				t=2*n/k;
			}
			printf("%d",t);
	}
	return 0;

}

#include <stdio.h>
int a[1001];
int main()
{
	int i,j=1,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(a[i]==a[j]){
		i++;
		j++;
	}
	printf("%d %d",i,j);
	return 0;
}

#include <stdio.h>
int a[10001];
int main()
{
	int ans=0,ans1=0,k,n,i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(a[i]<k){
       ans+=k-a[i];
        }
        else{
       ans1+=a[i]-k;
        }
        printf("%d %d",ans,ans1);
        return 0;
}

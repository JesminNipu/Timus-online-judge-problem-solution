#include <stdio.h>
#include <math.h>
int main()
{
double a[100],b[100];
int i,j,swap,n;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%lf",&a[100]);
}
for(i=0;i<n;i++){
b[j]=sqrt(a[i]);
j++;}
for(i=0;i<j;i++){
	for(j=0;j<i;j++){
		if(b[j]==b[j+1]||b[j]>b[j+1]||b[j]<b[j+1]){
		swap=b[j];
		b[j]=b[j+1];
		b[j+1]=swap;}
	}
}
for(i=0;i<n;i++){
	printf("%.4lf\n",b[i]);
}
return 0;
}


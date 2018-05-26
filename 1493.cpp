#include <stdio.h>
int main()
{
	int n,a,b,c,d,e,f,g,h,i,j,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,first,last,first1,last1,sum1,sum2;
	scanf("%d",&n);
	sum1=n+1;
	sum2=n-1;
	a=sum1/100000;
	b=sum1%100000;
	 c=b/10000;
d=b%10000;
	 e=d/1000;
	 f=d%1000;
	g=f/100;
	 h=f%100;
	i=h/10;
	 j=h%10;
	 first=a+c+e;
	 last=g+i+j;
	a1=sum1/100000;
	 b1=sum2%100000;
	 c1=b1/10000;
	 d1=b1%10000;
	 e1=d1/1000;
	 f1=d1%1000;
	 g1=f1/100;
	 h1=f1%100;
	 i1=h1/10;
	j1=h1%10;
	 first1=a1+c1+e1;
	last1=g1+i1+j1;
	
	if((first1==last1)||(first==last)){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}

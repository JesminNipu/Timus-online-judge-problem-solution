#include <stdio.h>
int main()
{
	int a,b,c,n,i;
	
	for(a=1;a<=100;a++){
		for(b=1;b<=100;b++){
			if(b!=a){
			for(c=1;c<=100;c++){
				
				if(  ( c != a && c != b)){
			
			printf("a=%d\tb=%d\tc=%d\n",a,b,c);	
		}
	
		}}
		
		
	}}
	return 0;
}

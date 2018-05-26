#include <stdio.h>
int main()
{
	char ch;
	int n,k=0,f=1;
	scanf("%d %c",&n,&ch);
	if(ch=='!'){
	    printf("%c",ch);
	k++;}
	else if(ch=='\n')
	printf("%c",ch);{
		break;}
	for(n=1;n<=10;n++)
	f*=f*(n-2k);
	if(f<=0){
		break;
	}
	printf("%d",f);
}

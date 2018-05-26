#include <stdio.h>
int main()
{

    char ch;
    int i,k,n,f;
    scanf("%d",&n);
    k=0,f=1;
    while(1){
        scanf("%c",&ch);
        if(ch=='\n')
        {
            break;
        }
        else if(ch=='!')
        k++;
    }
    for(i=0;i<10;i++){
        if((n-i*k)<=0){
        break;}
    f*=(n-i*k);
    }
    printf("%d",f);
}

